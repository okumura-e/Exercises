// In this activity you must implement an algorithm, using recursion, to calculate the binomial number.
#include<iostream>
using namespace std;
int result;
int fatorial (int fat){
    if(fat == 1){
        result = 1;
    }else{
        result = fat *fatorial(fat -1);
    };
};
int binominal (int n, int k){
    if(n == 0 & k > 0){
        result = 0;
    }else if(n >= 0 & k == 0){
        result = 1;
    }else{
        result = fatorial(n) / (fatorial(k) * fatorial(n - k));
    };
};
int main(){
    int num1, num2;
    cin>> num1>> num2;
    result = binominal(num1, num2);
    cout<< result << endl;
}
