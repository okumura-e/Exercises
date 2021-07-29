// Check whether N numbers provided by the user are prime or not.
#include<iostream>
using namespace std;
int main(){
    cout <<"How many numbers?\n";
    int N, a = 0, b = 1, count = 0; cin >> N;
    int array[N];
    while (count < N)
    {
        cin>>a;
        array[count] = a;
        count++;
    }
    count = 0;
    for(int i = 0; i < N; i++)
    {
        for(int p = 1; p <= array[i]; p++)
        {
            if(array[i] % p == 0)
            {
                count++;
            }
        }
    if(count == 2){
        cout << array[i] << "- YES" << endl;
    }else{
        cout << array[i] << "- NO" << endl;
    }
    count = 0;
    }
}