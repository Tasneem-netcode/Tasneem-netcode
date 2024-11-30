#include <iostream>
using namespace std;
class Complex{
    int a , b; 
    public:
    Complex(){ //default constructor 
        a=0;
        b=0;
    }
    Complex(int x , int y ){//parameterized
          a=x;
          b=y;

    }
    Complex(int x){//parameterized
        a=x;
        b=0;
    }
    void printNumber()
    {
        cout << "Your number is " << a << "+i" << b << endl;
    }
};
int main(){
    Complex c1(4 , 5);//parameterized constructor
    c1.printNumber();

    Complex c2(8);
    c2.printNumber();
    Complex c3;
    c3.printNumber();
   return 0;
}