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

    virtual void Work()
    {
        cout << Name << " is checking email, task backlog, etc" << endl;
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
        cout << Name << " is fixing bug using " << FavProgLang << endl;      // Works only when Name in protected
    }

    void Work()
    {
        cout << Name << " is coding" << endl;
    }
};

// INHERITANCE
class Teacher : public Employee
{
public:
    string Subject;

    void PrepareLesson()
    {
        cout << Name << " is preparing " << Subject << " Lesson" << endl;
    }

    void Work()
    {
        cout << Name << " is teaching " << Subject << endl;
    }

    // CONSTRUCTOR
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }
};

int main()
{

    // The most common use of polymorphism is when a parent class reference is used to refer to a child class object.

    Developer dev = Developer("Chauhan", "Microsoft", 25, "python");
    Teacher t = Teacher("Jack", "VSEC", 35, "History");

    // Class specific Work() will run if defined. If not, Work() of Employee will run
    // dev.Work();
    // t.Work();

    // a pointer of base class holding reference to derived class object
    Employee *e1 = &dev;
    Employee *e2 = &t;

    // Both run the Work() of Employee
    // e1->Work();
    // e2->Work();

    // Let's Make Work() of employee virtual
    e1->Work();
    e2->Work();
    return 0;
}
