#include <iostream>
using namespace std;

class StudentResult;

class ResultAnalyzer {
public:
    void analyzeResult(const StudentResult &s);
};

class StudentResult {
private:
    int rollNo;
    string name;
    float marks1, marks2, marks3;

    // Static data member
    static int totalStudents;

public:
    // Parameterized constructor
    StudentResult(int r, string n, float m1, float m2, float m3) {
        rollNo = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;

        totalStudents++;
    }

    // Friend class
    friend class ResultAnalyzer;

    // Static function
    static void showTotalStudents() {
        cout << "Total StudentResult Objects Created: "
             << totalStudents << endl;
    }

    // Destructor
    ~StudentResult() {
        cout << "StudentResult object destroyed for "
             << name << endl;
    }
};

// Definition of static data member
int StudentResult::totalStudents = 0;

// ResultAnalyzer function definition
void ResultAnalyzer::analyzeResult(const StudentResult &s) {

    float total = s.marks1 + s.marks2 + s.marks3;
    float percentage = total / 3;

    cout << "\nStudent Result" << endl;
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (s.marks1 >= 33 &&
        s.marks2 >= 33 &&
        s.marks3 >= 33) {
        cout << "Result: PASS" << endl;
    }
    else {
        cout << "Result: FAIL" << endl;
    }
}

int main() {

    StudentResult s1(101, "Rahul", 78, 85, 72);
    StudentResult s2(102, "Aman", 65, 70, 80);

    ResultAnalyzer analyzer;

    analyzer.analyzeResult(s1);
    analyzer.analyzeResult(s2);

    StudentResult::showTotalStudents();

    return 0;
}