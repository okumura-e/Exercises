// Entry: number of employees; name, age and salary of each employee.
// Processing: Employee Verification is younger and Employee is older.
// Output: list of employees, with name, age and salary of each employee

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
    int i, j, a, N; cin >> N;
    float b;
    string d;
    company employee[N];
    cout << "now insert the employees" << endl;
    for(i = 0; i < N; i++)
    {
        cout << "name: ";
        cin.ignore();
        getline(cin, employee[i].name);
        cout << "age: ";
        cin >> employee[i].age;
        cout << "salary: ";
        cin >> employee[i]. salary;
    };
    
    for(i = 0; i < N; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            if(employee[i].age > employee[j].age)
            {
                a = employee[i].age;
                employee[i].age = employee[j].age;
                employee[j].age = a;
                d = employee[i].name;
                employee[i].name = employee[j].name;
                employee[j].name = d;
                b = employee[i].salary;
                employee[i].salary = employee[j].salary;
                employee[j].salary  = b;
            }
        }
    };
    cout << "the younger: " << employee[0].name << "; idade: " << employee[0].age<< ";salario: " << employee[0].salary << endl;
    cout << "the older : " << employee[N-1].name << "; idade: " << employee[N-1].age<<"; salario: " << employee[N-1]. salary << endl;
}
