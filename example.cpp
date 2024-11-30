#include <iostream>
#include<cmath>
using namespace std;
/*
    Create 2 classes 
    Simplecalculator - takes input of 2 numbers using utility function and performs + ,- <* ,/ and display result using another function.
    2. Scientific Calculator - takes input of 2 numbers unsing a utility function and perform any four  scientific operations of your choice 

     create another class Hybrid Calculator and inherit it using these 2 classes :
     1 . what type of inheritance
     2. what mode of inheritance

*/
class SimpleCalculator{

    int a  , b;
    int sum ,diff,prod;
    float div;
    public:
    void values(int num1 , int num2){
        a =num1;
        b=num2;
    }
    void process1(){
        sum = a + b ;
        diff =a -b;
        prod = a*b;
        div= (float)a/b;

    }
    void display_sim(){
        cout<<"sum is "<<a<<"+"<<b <<"= "<<sum<<endl;
        cout<<"diff is "<<a<<"-"<<b <<"= "<<diff<<endl;
        cout<<"product is "<<a<<"*"<<b <<"= "<<prod<<endl;
        cout<<"division is "<<a<<"/"<<b <<"= "<<div<<endl;

    }
};

class ScientificCal{
    int n1 , n2;
    int power1 , power2 ,  facto ;
    double square_root1 , square_root2 ;
    public:
     void assign(int a1 , int a2){
        n1 = a1;
        n2 = a2;
     }
     void process2(){
        power1= pow(n1 , n2);
        power2= pow(n2 , n1);
        square_root1 =sqrt(float(n1));
        square_root2 =sqrt(float(n2));
        facto = 1;
        for (int i = 1; i <= n1; i++)
        {
            /* code */
            facto *= i;
        }
        
     }
     void display_sci(void){
        cout<<"Square root of number 1 "<<square_root1<<endl;
        cout<<"Square root of number 2 "<<square_root2<<endl;
        cout<<"power of base number 1 and raise to number 2 is "<<power1<<endl;
        cout<<"power is base number 2 and raise to number 1 is "<<power2<<endl;
        cout<<"Factorial is "<<facto<<endl;
        cout<<"Value of cos(n1)" <<cos(n1)<<endl;
        cout<<"Value of cos(n2)" <<cos(n2)<<endl;
        cout<<"Value of sin(n1)" <<sin(n1)<<endl;
        cout<<"Value of sin(n2)" <<sin(n2)<<endl;
        cout<<"Value of tan(n1)" <<tan(n1)<<endl;
        cout<<"Value of tan(n2)" <<tan(n2)<<endl;
     }
};

class Hybridcal : public SimpleCalculator , public ScientificCal{
    public:
    void set(int a , int b ){
        values(a , b);
        assign(a , b);
    }
    void process(void){
        process1();
        process2();
    }
    void display(void){
        display_sim();
        display_sci();
    }
};
int main(){
    int a , b;
    cout<<"Enter first number";
    cin>>a ;
     cout<<"Enter second number";
    cin>>b;

    Hybridcal obj;
    obj.set(a,b);
    obj.process();
    obj.display();



   return 0;
}