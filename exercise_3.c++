// Check the sum of the N first prime numbers.
#include<iostream>
using namespace std;
int main()
{
    cout << "how many numbers primes do you want to sum?" << endl;
    int sum, b = 1, count = 0, X; cin >> X;
    int array[X];

    for(int i = 0; i < X; i++)
    {
        for(int y = 1; y < b; y++)
        {
            while(y < b)
            {
                if(b % y == 0)
                {
                    count ++;
                }
            }
            if(count == 2)
            {
                array[i] = b;
            }
        }
        count = 0;
        b++;
    }
    for(int i = 0; i < X; i++)
    {
        cout << array[i] << endl;
    }
}