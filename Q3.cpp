#include <bits/stdc++.h>
using namespace std;

class Patient {
private:
    int patientId;
    string patientName;

    
    static int activePatients;

public:
    
    Patient(int id, string name) {
        patientId = id;
        patientName = name;
        activePatients++;

        cout << "Patient created: " << patientName << endl;
       
    }

    
    ~Patient() {
        activePatients--;

        cout << "Patient destroyed: " << patientName << endl;
       
    }

    
    static void showActivePatients() {
        cout << "Current Active Patients: "
             << activePatients << endl;
    }
};
int Patient::activePatients = 0;

int main() {
	// your code goes here

    Patient p1(101, "Rahul");
    Patient p2(102, "Aman");

    Patient::showActivePatients();

    
    {
        Patient p3(103, "Rohit");

        Patient::showActivePatients();

    } 

    cout << "\nAfter local block:" << endl;
    Patient::showActivePatients();

    return 0;
}
