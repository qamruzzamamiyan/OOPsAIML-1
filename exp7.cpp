#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

    
    static int totalStudents;

public:

    
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        totalStudents++;
    }

    
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name   : " << name << endl;
    }

    
    static void showTotalStudents()
    {
        cout << "Total Students: " << totalStudents << endl;
    }

    // Friend function declaration
    friend void showStudentDetails(Student s);
};

// Definition of static data member
int Student::totalStudents = 0;


void showStudentDetails(Student s)
{
    
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Name   : " << s.name << endl;
}

int main()
{
    
    Student s1(101, "Rahul");
    Student s2(102, "Aman");
    Student s3(103, "Qamruzzama");

    

    s1.display();
    cout << endl;

    s2.display();
    cout << endl;

    s3.display();

    // Static member function
    cout << "\n";
    Student::showTotalStudents();

    
    showStudentDetails(s1);

    return 0;
}