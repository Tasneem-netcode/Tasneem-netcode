#include <iostream>
using namespace std;
class Complex{
    int a , b ;
    public:
     Complex(int , int ); // constructor declaration
     void printNumber()
    {
        cout << "Your number is " << a << "+i" << b << endl;
    }
};
Complex :: Complex(int x , int y){ // this is parameterized constructor  as it takes 2 parameters
    a = x; 
    b= y;
}

int main(){
    // Implicit call 
    Complex c(4 ,7);
    c.printNumber();
    Complex b= Complex(5 , 2);
    b.printNumber();
   return 0;
}