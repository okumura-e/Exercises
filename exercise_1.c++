//Check whether a user-supplied number is prime or not.
#include <iostream>
using namespace std;
int main(){
    int i, n, p = 0; cin >>n;
    for(i = 1; i <= n; i++){
        if(n % i ==0){
            p += 1;
        }
    };
    if(p ==2){
        cout <<"Yes\n";
    }else{
        cout <<"No\n";
    };
}
