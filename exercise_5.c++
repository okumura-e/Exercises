// Reading and printing a vector of N elements.

#include <iostream>
using namespace std;

int main()
{
    cout << "how many numbers do you want? " << endl;
    int i, N, a = 0; cin >> N;
    cout << "insert now the numbers: " << endl;
    int array[N];
    for(i = 0; i < N; i++)
    {
        cin >> a;
        array[i] = a;
    };
    cout << "these are the numbers: " << endl;
    for(i = 0; i < N; i++)
    {
        cout << array[i] << endl;
    };
} 
