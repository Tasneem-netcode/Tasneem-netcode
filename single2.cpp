#include <iostream>
using namespace std;
// base class
class Base
{
    int data1; // private bydefault and is not inheritable
public:
    int data2;
    void setData();//there are public and can be accesed by derived class 
    int getData1();//there are public and can be accesed by derived class 
    int getData2();//there are public and can be accesed by derived class 
};
void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}
//derived class
class Derived : private Base
{ // class is being inherited publically
    int data3;

public:
    void process();
    void display();
};

void Derived :: process(){
    setData();
    data3 = data2 * getData1();
}
void Derived :: display(){
    cout<<"value of data 1 is "<<getData1()<<endl;
    cout<<"value of data 2 is "<<data2<<endl;
    cout<<"value of data 3 is "<<data3<<endl;
}
int main()
{
   Derived der;
//    der.setData(); //here we cannot accesssetData method
   der.process();
   der.display();
    return 0;
}