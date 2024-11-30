#include <iostream>
using namespace std;
class Complex{
    int a , b ;
    public:
    //Creating a constuctor 
    //Constructor is a special member function with the same name as the class 
    //Its used to initialize the objects of the class 
    //It is automatically invoked (called) when an object is created.

    Complex(void); // constructor declaration
     void printNumber()
    {
        cout << "Your number is " << a << "+i" << b << endl;
    }


};
//this constructor assigns vslued to a and b here it self so we dont need to write a seperate method function to initialize the values like setdata() function
Complex :: Complex(void){
    a = 10; 
    b= 4;
}
int main(){
  Complex c ;
  c.printNumber();
   return 0;
}

// CHARACTERS OF CONSTRUCTORS

// 1. It should be declared in the public section of the class
// 2. They are automatically invoked when the object is created 
// 3.they cannot return values and have no return type
//4.it can have default arguments
//5. We cannot refer to their address