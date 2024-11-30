#include <iostream>
using namespace std;
// Forwaed declaration
class Complex; // we are declaring a class Complex before the 2 clasess to ensure the compiler that my class Complx is present later in my program

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex  , Complex  ); // class declare to calculate real part
    int sumComComplex(Complex  , Complex  ); // class declare to calculate imaginary part
};
class Complex
{
private:
    int a, b;
    // friend class declared saying that calculator can acces private members oF COMPLEX
    //individually declaring 2 functions as friends 
    // friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator ::sumComComplex(Complex o1, Complex o2);
    // Aliter : if so many functions are there
    friend class Calculator; // make the whole calculator class friend
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << "+i" << b << endl;
    }
};
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
} // class define

int Calculator ::sumComComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
} // 

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 8);

    Calculator cal;
    int result = cal.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2  is " << result << endl; 
    int resultc = cal.sumComComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2  is " << resultc << endl;
    return 0;
}