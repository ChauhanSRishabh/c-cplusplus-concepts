#include <iostream>
using std ::string;
using std ::cout;
using std ::endl;

class Employee
{
    public:
        string Name;
        string Company;
        int Age;

        void IntroduceYourself()
        {
            cout << "Name : " << Name << endl;
            cout << "Company : " << Company << endl;
            cout << "Age : " << Age << endl;
        }

        // CONSTRUCTOR
        Employee(string name, string company, int age)
        {
            Name = name;
            Company = company;
            Age = age;          
        }
};

int main()
{
    
    Employee emp1 = Employee("Rishabh", "Google", 27);
    emp1.IntroduceYourself();

    Employee emp2 = Employee("Rishu", "Amazon", 35);
    emp2.IntroduceYourself();
    return 0;
}
