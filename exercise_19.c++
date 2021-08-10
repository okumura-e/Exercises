/*Build a program, that performs a determined sequence of operations on a dynamic list, which will have a positive integer as data stored in each element.
 A. each line of input will contain two integers, representing an operation to be performed in dynamic list.
    - The first integer represents the type of operation: 1 - InsertFirst; 2 - RemoveFirst; 3 - InsertEnd; 4 - RemoveEnd; 5 - Clear; 0 - Close operations.
    - The second integer is a parameter for the operation to be performed.
 B. When ending the operations, the stored values ​​must be printed and the List empty.*/

 #include<iostream>
using namespace std;

struct list{
    int item;
    list *next;
    list *last;
};
bool Empty(list *aux){
    if(aux == NULL){
        return true;
    }else{
        return false;
    };
};
void insertFirst(list **aux, int newItem){
    if(Empty(*aux)){
        *aux = new list;
        (*aux)->item = newItem;
        (*aux)->next = NULL;
    }else{
        list *pont = new list;
        pont->item = newItem;
        pont->next = *aux;
        *aux = pont;
    };
};
void insertEnd(list **aux, int newItem){
    if (Empty(*aux)){
        *aux = new list;
        (*aux)->item = newItem;
        (*aux)->next = NULL;
    }else{
        list *pont = new list;
        list *help;
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
void RemoveFirst(list **aux){
    if(Empty(*aux)){
        cout << "Do not have what to remove" << endl;
    }else{
        list *pont = *aux;
        *aux = pont->next;
        delete[]pont;
    };
};
void RemoveEnd(list **aux){
    if(Empty(*aux)){
        cout << "Empty List \n";
    }else{
    list *help = *aux;
        while((help->next)->next != NULL){
            help = help->next;
        };
    list *sec = help->next;
    help->next = NULL;
    delete[] sec;
    };
};
void Clear(list **aux){
    if(Empty(*aux)){
        cout << "The list is already empty \n";
    }else{
        while(Empty(*aux) == false){
            RemoveFirst(aux);
        };
    };
};
void Finish(list **aux){
    if(Empty(*aux)){
        cout << "Dont have anything in the list\n";
    }else{
        while(Empty(*aux) == false){
            cout << (*aux)->item << endl;
            RemoveFirst(aux);
        };
    };
};
int main()
{
    list *aux = NULL;
    int a, b;
    while(a != 0 && a != 5)
    {
        cin >> a >> b;
        if (a == 1){
            insertFirst(&aux, b);
        }
        else if(a == 2){
            RemoveFirst(&aux);
        }
        else if(a == 3){
            insertEnd(&aux, b);
        }
        else if(a == 4){
            RemoveEnd(&aux);
        }
        else if(a == 5){
            Clear(&aux);
        }
        else if(a == 0){
            Finish(&aux);
        }
    };
}

