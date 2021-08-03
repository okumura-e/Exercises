// Entry: number of employees; name, age and salary of each employee.
// Processing: ranking employees ascending by salary and age.
// Output: list of employees, with name, age and salary of each employee, as ordered.

#include <iostream>
using namespace std;

struct company{
    string name;
    int age;
    float salary;
};

int main()
{
    cout << "how many employee do you want to insert?" << endl;
    int i, j, a, N; cin >> N;
    float b;
    string d;
    company employee[N];
    cout << "now insert the employees: " << endl;
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
            if(employee[i].salary < employee[j].salary)
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
    cout << "\nthese are the employees:\n" << endl;
    for(i = 0; i < N; i++)
    {
        cout<< "name: " << employee[i].name <<"; age: "<< employee[i].age << "; salario: " << employee[i].salary << endl;
    };
}
