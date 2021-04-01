
#include <iostream>
using namespace std;

class complex
{
    float r;
    float i;
     public:void getdata()
     {
         cin>>r>>i;
     }
     
     public:void show()
     {
         cout<<r<<"+i"<<i<<endl;
     }
     
     complex sum(complex);
};

complex complex::sum(complex c)
{
    complex t;
    t.r=r+c.r;
    t.i=i+c.i;
    return(t);
    
}


int main()
{
    complex a,b,s;
    a.getdata();
    b.getdata();
    s=a.sum(b);
    a.show();
    b.show();
    s.show();
    
    return 0;
}
