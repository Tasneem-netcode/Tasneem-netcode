#include <iostream>
using namespace std;

class employee
{
    private:
    int a, b ,c ; //cannot acces directly 
    public:
    int d , e ; // accesed directly 
         
         void setData(int a1 , int b1,int c1); //Declaration
         void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
         }
};

void employee :: setData(int a1 , int b1, int c1){
    a = a1;
    b= b1;
    c= c1;

}
int main(){
    employee harry; // harry naam ka employe bangaya
    harry.d = 23;
    harry.e = 65;
    // harry.a= 21; //this will give error as a is private dataset in the class
    harry.setData(1 , 3, 5);
    harry.getData();
   return 0;
}