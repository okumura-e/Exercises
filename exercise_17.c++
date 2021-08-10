/* A. each line of input will contain two integers, representing an operation to be performed on the dynamic stack.
    - The first integer represents the type of operation: 1 - Stack up; 2 - Unstacking; 3 - Destroy stack; 0 - Close operations.
    - The second integer is a parameter for the operation to be performed.
   B. When ending operations, the stored values ​​must be printed and the stack destroyed.*/

#include<iostream>
using namespace std;
struct stack{
    int last;
    stack *prox;
};

bool Empty(stack *aux){
    if(aux == NULL){
        return true;
    }else{
        return false;
    };
};

void StackUp(stack **aux, int newItem){
    if (Empty(*aux)){
        *aux = new stack;
        (*aux)->last = newItem; 
        (*aux)->prox = NULL; 
    }else{
        stack *pont = new stack; 
        pont->last = newItem; 
        pont->prox = *aux; 
        *aux = pont;
    };
};

void UnStack(stack **aux){
    if(Empty(*aux)){
        cout<<"empty stack\n";
    }else{
        stack *pont = *aux;
        *aux = pont->prox;
        delete[]pont;
    }
}

void Destroy(stack **aux){
    if(Empty(*aux)){
        cout << "do not have anything to destroy\n";
    }else{
        while(Empty(*aux) == false){
            UnStack(*&aux);
        };
    };
};

void finish(stack **aux){
    if(Empty(*aux)){
        cout << "The stack is empty \n";
    }else{
        while(Empty(*aux)== false){
            cout << (*aux)->last << endl;
            UnStack(aux);
        }
    };
};

int main()
{ 
    stack *aux = NULL;
    int a, b;
    while (a != 0 & a != 3){
        cin >> a >> b;
        if(a == 1){
            StackUp(&aux, b);
        }
        else if(a == 2){
            b = -1;
            UnStack(&aux);
        }
        else if(a == 3){
            b = -1;
            Destroy(&aux);
        }
        else if(a == 0){
            b = -1;
            finish(&aux);
        }
    };
}
