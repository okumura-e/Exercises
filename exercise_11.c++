// Entry: number of employees; name, age and salary of each employee.
// Output: list of employees, with name, age and salary of each employee.

#include <iostream>
using namespace std;

struct company{
    string name;
    int age;
    float salary;
};
int main()
{
    cout << "how many employees do you want to insert?" << endl;
    int i, N; cin >> N;
    company employee[N];
    for(i = 0; i < N; i++)
    {
        cout << "name: ";
        cin.ignore();
        getline(cin, employee[i].name);
        cout << "age: ";
        cin >> employee[i].age;
        cout << "salary: ";
        cin >> employee[i].salary;
    };
    cout << "\nthese are the employees:\n" << endl;
    for(i = 0; i < N; i++)
    {
        cout << "name: " << employee[i].name << "; age: " << employee[i].age << "; salary: " << employee[i].salary << endl;
    };
}

