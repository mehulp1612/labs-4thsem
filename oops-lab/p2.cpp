#include<iostream>
using namespace std;

class Student{
    string name;
    int roll_no;

    public:
        void getdata(){
            cout<<"name of the student: ";
            cin>>name;
            cout<<"roll number of the student: ";
            cin>>roll_no;
        }
        
        void putdata(){
            cout<<"name is: "<<name<<endl;
            cout<<"roll number of "<<name<<" is: "<<roll_no<<endl;
        }
};


int main(){
    
    Student c;

    c.getdata();
    c.putdata();

    return 0;
}