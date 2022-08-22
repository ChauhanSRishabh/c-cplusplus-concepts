#include <iostream>
using std ::cout;
using std ::endl;
using std ::string;

// ABSTRACTION : Process of hiding complex things behind a procedure that makes those things look simple
// implementing a contract, which is an abstract class
class AbstractEmployee
{   
    // make this function obligatory
    // making a pure virtual function
    virtual void AskForPromotion() = 0;
};

// Whichever class signs the contract, or in other words, inherits from the AbstractEmployee class, Employee in our case, that class will have to provide implementation for the method that is inside the contract 
class Employee:AbstractEmployee
{
    // ENCAPSULATION
private:
    string Name;
    string Company;
    int Age;

public:
    // GETTERS & SETTERS
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        if (age >= 18)
            Age = age; // Validation Rules to Setters
    }
    int getAge()
    {
        return Age;
    }

    void IntroduceYourself()
    {
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Age : " << Age << endl;
    }

    void AskForPromotion()
    {
        if(Age>30)
            cout << Name << " got promoted" << endl;
        else
             cout << Name << " you're ineligible" << endl;
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
    Employee emp2 = Employee("Rishu", "Amazon", 35);

    emp1.AskForPromotion();
    emp2.AskForPromotion();
    return 0;
}
