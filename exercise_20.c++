/*Build a program, that executes a determined sequence of operations in a dynamic double-chained list, which will have a positive integer as data stored in each element. This list does not admit that there are repeated values ​​stored. Therefore, before making each insertion, check the pre-existence of the element in the list and abort the operation if so.
  A. each line of input will contain two integers, representing an operation to be performed in a dynamic double-threaded list.
    - The first integer represents the type of operation: 1 - InsertFirst; 2 - RemoveFirst; 3 - InsertEnd; 4 - RemoveEnd; 5 - Clear; 0 - Close operations.
    - The second integer is a parameter for the operation to be performed.
  B. When ending operations, the stored values ​​must be printed in the following directions:
    - From start to finish; and
    - From end to beginning.*/

#include<iostream>
using namespace std;
struct list {
    int Item;
    list* nextFirst;
    list* nextEnd;
};
bool Empty(list* aux) {
    if (aux == NULL) {
        return true;
    }
    else {
        return false;
    };
};
bool Check(list** aux, int num) {
    list* pont = *aux;
    while (pont != NULL) {
        if (pont->Item == num) {
            return true;
        }
        pont = pont->nextEnd;
    }
    return false;
};
void insertFirst(list** aux, int newItem) {
    if (Empty(*aux)) {
        *aux = new list;
        (*aux)->Item = newItem;
        (*aux)->nextFirst = nullptr;
        (*aux)->nextEnd = nullptr;
    }
    else {
        if (Check(aux, newItem) == false) {
            list* pont = new list;
            pont->Item = newItem;
            pont->nextFirst = nullptr;
            pont->nextEnd = *aux;
            (*aux)->nextFirst = pont;
            *aux = pont;
        }
    };
};
void insertEnd(list** aux, int newItem) {
    if (Empty(*aux)) {
        *aux = new list;
        (*aux)->Item = newItem;
        (*aux)->nextFirst = nullptr;
        (*aux)->nextEnd = nullptr;
    }
    else{
        if (Check(aux, newItem) == false) {
            list* pont = new list;
            list* help = *aux;
            pont->Item = newItem;
            pont->nextEnd = nullptr;
            while (help->nextEnd != nullptr) {
                help = help->nextEnd;
            };
            help->nextEnd = pont;
            pont->nextFirst = help;
        }
        else{
            return;
        }
    }
};
void removeFirst(list** aux) {
    if (Empty(*aux)) {
        cout << "don't have what to remove" << endl;
    }
    else {
        list* pont = *aux;
        *aux = (*aux)->nextEnd;
        (*aux)->nextFirst = NULL;
        delete pont;
    };
};
void removeEnd(list** aux) {
    if (Empty(*aux)) {
        cout << "don't have what to remove" << endl;
    }
    else {
        list* help = *aux;
        while ((help->nextEnd)->nextEnd != NULL) {
            help = help->nextEnd;
        };
        list* yah = help->nextEnd;
        help->nextEnd = nullptr;
        delete[] yah;
    };
};
void Clear(list** aux) {
    while (Empty(*aux) == false) {
        removeFirst(aux);
    };
};
void Finish(list** aux) {
    list* pont = *aux;
    while (pont != NULL) {
        cout << pont->Item << endl;
        pont = pont->nextEnd;
    };
    pont = *aux;
    while (pont->nextEnd != nullptr) {
        pont = pont->nextEnd;
    }
    while (pont != NULL) {
        cout << pont->Item << endl;
        pont = pont->nextFirst;
    };
};
int main() {
    list* aux = NULL;
    int a = 1, b = 1;
    while (a != 5 && a != 0)
    {
        cin >> a >> b;
        if (a == 1) {
            insertFirst(&aux, b);
        }
        else if (a == 2) {
            removeFirst(&aux);
        }
        else if (a == 3) {
            insertEnd(&aux, b);
        }
        else if (a == 4) {
            removeEnd(&aux);
        }
        else if (a == 5) {
            Clear(&aux);
        }
        else if (a == 0) {
            Finish(&aux);
        };
    };
}