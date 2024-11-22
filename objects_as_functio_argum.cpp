#include <iostream>
using namespace std;
class complex{
    int a ;
    int b;
    public:
    void setData(int v1 , int v2){
        a= v1;//assign a as v1
        b = v2;//assign b as v2
    }
    void setDataBySum(complex o1 , complex o2){//class ka objects as arguments
          a =o1.a + o2.a;
          b =o1.b + o2.b;
    } 
    void printData(){
        cout<<"The complex number is "<<a<<"+i"<<b<<endl;
    }
};
int main(){
    complex c1 , c2 , c3;
    c1.setData(1,4);
    c1.printData();
    c2.setData(5,6);
    c2.printData();

    c3.setDataBySum(c1 , c2);// to perform addition between both complex numbers c1 and c2
    c3.printData();
   return 0;
} 