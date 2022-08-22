#include <iostream>
using std ::cout;
using std ::endl;
using std ::string;

// ABSTRACTION
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
    // ENCAPSULATION
private:
    string Company;
    int Age;

protected:
    string Name;

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
        if (Age > 30)
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

// INHERITANCE
// Developer is a child class of Employee
// Developer Class has access to all the properties of Employee class
class Developer : public Employee
{
public:
    string FavProgLang;

    // CONSTRUCTOR
    Developer(string name, string company, int age, string lang) : Employee(name, company, age)
    {
        FavProgLang = lang;
    }

    void FixBug()
    {
        cout << getName() << " is fixing bug using " << FavProgLang << endl; // This works irrespective of Name being in private or protected
        cout << Name << " is fixing bug using " << FavProgLang << endl; // Works only when Name in protected
    }
   
};

class Teacher : public Employee
{
public:
    string Subject;

    void PrepareLesson()
    {
        cout << Name << " is preparing " << Subject << " Lesson" << endl;
    }

    // CONSTRUCTOR
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }
};

int main()
{
    Developer dev = Developer("Chauhan", "Microsoft", 25, "python"); 
    // dev.FixBug();
    // dev.AskForPromotion();
    
    Teacher t = Teacher("Jack", "VSEC", 35, "History");

    // Object of a derived class won't have access to properties/behaviors of base class unless inheritance is made public
    // All these would give errors if inheritance is not made public
    t.PrepareLesson();
    t.AskForPromotion();
    
    return 0;
}
