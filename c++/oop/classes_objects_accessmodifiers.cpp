#include <iostream>
using std ::string;

class Employee
{
    // members of the class- attributes and behaviors
    // Attributes
    
    // Access Modifiers
    public:
        string Name;
        string Company;
        int Age;

    // Behaviors
};

int main()
{
    // Object
    Employee emp1; // created a variable of type Employee, object of class Employee
    
    // nothing shows when we write epm1., no suggestion as everything inside a class is private by default
    // setting it ot public
    emp1.Name = "Rishabh";
    emp1.Company = "Google";
    emp1.Age = 27;
    return 0;
}
