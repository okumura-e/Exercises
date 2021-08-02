// Reading and printing a vector of 5 elements.

#include <iostream>
using namespace std;
int main()
{
    int i, a = 0;
    int array[4];
    cout << "insert the elements: " << endl;
    for(i = 0; i <= 4; i++)
    {
        cin >> a;
        array[i] = a;
    };
    cout << "these are the elements: " << endl;
    for(i = 0; i <= 4; i++)
    {
        cout << array[i]<< endl;
    };
}
