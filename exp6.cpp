#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:

    
    Student()
    {
        id = 0;
        name = "Abhi";
        cout << "Normal Constructor " << endl;
    }

    
    Student(int i, string n)
    {
        id = i;
        name = n;
        cout << "Parameterized Constructor " << endl;
    }


    Student(const Student &obj)
    {
        id = obj.id;
        name = obj.name;
        cout << "Copy Constructor " << endl;
    }


    void display()
    {
        cout << "ID   : " << id << endl;
        cout << "Name : " << name << endl;
    }

    
    ~Student()
    {
        cout << "Destructor Called for " << name << endl;
    }
};

int main()
{
    


    Student s1;
    s1.display();

    

    
    Student s2(101, "Qamruzzama");
    s2.display();

    

    
    Student s3(s2);
    s3.display();



    return 0;
}