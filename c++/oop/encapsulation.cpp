#include <iostream>
using std ::cout;
using std ::endl;
using std ::string;

class Employee
{
private:
    string Name;
    string Company;
    int Age;
    // these properties can't be accessed anywhere outside of our class

public:
    // SETTERS
    void setName(string name)
    {
        Name = name;
    }

    // GETTERS
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
        if(age>=18)
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

    emp1.setName("RSC");

    // emp1.setAge(15); // won't change as validation rule condn isn't satisfied
    emp1.setAge(22);


    cout << emp1.getName() << " is " << emp1.getAge() << " years old" << endl;

    return 0;
}
