// Reading and printing a N × M matrix
#include <iostream>
using namespace std;
int main()
{
    int n, m, l, c;
    cout << "how many rows? " << endl; cin >> n; 
    cout << "how many columns? " << endl; cin >> m;
    int matrix[n][m];
    for(l = 0; l < n; l++)
    {
        for(c = 0; c < m; c++)
        {
            cin >> matrix[l][c];
        };
    };
    cout << "the matrix: " << endl;
    for(l = 0; l < n; l++)
    {
        for(c = 0; c < m; c++)
        {
            cout << matrix[l][c] <<" ";
        };
    cout << endl;
    };
}
