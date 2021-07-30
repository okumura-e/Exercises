// Check the sum of the N first prime numbers.
#include<iostream>
using namespace std;
int main()
{
    cout << "how many numbers primes do you want to sum?" << endl;
    int sum, count = 0, X; cin >> X;
    int array[X];
    for(int i = 0; i <= X; i++)
    {
        int b = 1;
        for(int y = b; y <= b; y++)
        {
            if(b % y == 0)
            {
                count++;
                if(count == 2)
                {
                    array[i] = b;
                }
            }
        b++;
        count = 0;
        }
    }
    for(int i = 0; i <= X; i++)
    {
        cout << array[i] << endl;
    }
}