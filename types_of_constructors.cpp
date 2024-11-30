#include <iostream>
using namespace std;
class Complex{
    int a , b ;
    public:
     Complex(void); // constructor declaration
     void printNumber()
    {
        cout << "Your number is " << a << "+i" << b << endl;
    }
};
Complex :: Complex(void){//default cinstructors as it takes no parameters
    a = 0; 
    b= 0;
}

int main(){
    Complex a;
    a.printNumber();
   return 0;
}