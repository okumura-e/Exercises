/*Build a program, that executes a determined sequence of operations in a dynamic queue, which will have a positive integer as data stored in each element.
 A. each line of input will contain two integers, representing an operation to be performed in dynamic queue.
    - The first integer represents the type of operation: 1 - Insert; 2 - Remove; 3 - Empty Queue; 0 - Close operations.
    - The second integer is a parameter for the operation to be performed. 
 B. When ending operations, the stored values ​​must be printed and the queue empty.*/

 #include<iostream>
using namespace std;

struct queue{
    int item;
    queue *last;
    queue *next;
};
bool Empty(queue *aux){
    if(aux == NULL){
        return true;
    }else{
        return false;
    };
};
void insert(queue **aux, int newItem){
    if (Empty(*aux)){
        *aux = new queue;
        (*aux)->item = newItem;
        (*aux)->next = NULL;
    }else{
        queue *pont = new queue;
        queue *help;
        pont->item = newItem;
        pont->next = NULL;
        if((*aux)->next == NULL){
            (*aux)->next = pont;
        }else{
            help = (*aux)->next;
            while (help->next != NULL){
                help = help->next;
            }
            help->next = pont;
            (*aux)->last = pont;
        };
    };
};
void Remove(queue **aux){
    if(Empty(*aux)){
        cout << "don't have what to remove" << endl;
    }else{
        queue *pont = *aux;
        *aux = pont->next;
        delete[]pont;
    };
};
void Clear(queue **aux){
    if(Empty(*aux)){
        cout << "The queue is already empty\n";
    }else{
        while(Empty(*aux) == false){
            Remove(aux);
        };
    };
};
void Finish(queue **aux){
    if(Empty(*aux)){
        cout << "Don't have anything in the queue\n";
    }else{
        while(Empty(*aux) == false){
            cout << (*aux)->item <<endl;
            Remove(aux);
        };
    };
};

int main()
{
    queue *aux = NULL;
    int a, b;
    while(a != 0 && a != 3){
        cin >> a >> b;
        if(a == 1){
            insert(&aux, b);
        }
        else if(a == 2){
            Remove(&aux);
        }
        else if(a == 3){
            Clear(&aux);
        }
        else if(a == 0){
            Finish(&aux);
        }
    };
} 
