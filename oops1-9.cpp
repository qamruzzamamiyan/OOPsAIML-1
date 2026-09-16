#include <bits/stdc++.h>
using namespace std;
class Student {
    public :
    int roll_number;
    int marks;
    string name;
    void input_data(int r,int m, string s){
        roll_number =r;
        marks =m;
        name = s;
    }
     void display_data(){
         cout<<roll_number<<endl;
         cout<<marks<<endl;
         cout<<name<<endl;
         
         
     }
};

int main() {
	// your code goes here
 Student st;
 int r,m;
 cin>>r>>m;
 
 string s;
 getline(cin,s);
 st.input_data(r,m,s);
 st.display_data();
}
