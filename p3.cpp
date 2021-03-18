#include<iostream>
using namespace std;

class average{

    int a,b,c,sum;
    float aver;

    public:
        void inp(){
            cout<<"enter 3 numbers:";
            cin>>a>>b>>c;
            sum = a+b+c;
            aver = sum /3;
        }

        void opt(){
            cout<<"sum is: "<<sum<<endl;
            cout<<"average is: "<<aver<<endl;
        }

};


int main(){

    average avr;

    avr.inp();
    avr.opt();

    return 0;
}