//In this activity you should implement an algorithm, using recursion, to calculate the nth number of the Fibonacci Series.

#include<iostream>
using namespace std;
int result;
int fibonacci(int N){
    if(N == 0 || N == 1){
        result = N;
    }else{
        result = fibonacci(N - 1) + fibonacci((N - 2));
    };
};
int main(){
    int num; cin>> num;
    result = fibonacci(num);
    cout<< result<<endl;
}
