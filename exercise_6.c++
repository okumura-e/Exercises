// Reading and printing a 2x2 matrix

#include<iostream>
using namespace std;
int main()
{
    int l, c;
    int matrix[2][2];
    for(l = 0; l < 2; l++)
    {
        for(c = 0; c < 2; c++)
        {
            cin >> matrix[l][c];
        }
    };
    for(l = 0; l < 2; l++)
    {
        for(c = 0; c < 2; c++)
        {
            cout <<matrix[l][c] <<" ";
        }
    cout <<endl;
    };
}

