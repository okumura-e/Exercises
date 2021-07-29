// Check whether N numbers provided by the user are prime or not.
#include<iostream>
using namespace std;
int main(){
    cout <<"How many numbers?\n";
    int N, a = 0, b = 0; cin >> N;
    int array[N];
    while (a <= N)
    {
        cin>>a;
        array[a] = a;
    }
    for(int i = 1, c = 0; i <= N; i++, c++)
    {
        if(array[c] % i == 0)
        {
            b++;
        }
    }
    /*cout <<"How many numbers?\n";
    int N, i; cin >> N;
    int array[N];
    for(i = 0; i < N; i++){
        cin >> array[i];
    };
    for(i = 0; i < N; i++){
        if(array[i] != 2 & array[i] %2 == 0){
            cout << vetor[i]<<" : NÃO\n";
        }
        else if(vetor[i] == 1 or vetor[i] != 3 & vetor[i]%3 == 0 or vetor[i] != 5 & vetor[i]%5 == 0 or vetor[i] !=7 & vetor[i]%7 == 0 or vetor[i] !=11 & vetor[i] %11 == 0){ 
            cout << vetor[i]<< " : NÃO\n";
        }
        else{
            cout <<vetor[i]<< " : SIM\n";
        };
    };
    
    return 0;*/
}



}