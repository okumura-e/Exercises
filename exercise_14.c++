//In this activity you must implement an algorithm, using recursion, to calculate the factorial of a number n

#include<iostream>
using namespace std;

int result;
int factorial (int fat){
    if(fat == 1)
    {
        result = 1;
    }
    else
    {
        result = fat *factorial(fat -1);
    }
};

int main(){
    int num; cin>> num;
    result = factorial(num);
    cout<< result << endl;
}
