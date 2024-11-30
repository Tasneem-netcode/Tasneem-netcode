#include <iostream>
using namespace std;

class BankDeposit{
    int principal;
    int year;
    float interestRate;
    float returnValue;

    public:
    BankDeposit(){}//DEFAULT CONSTRUCTOR THAT TELLS THE COMPILER THAT WE ARE GOING TO MAKE OBJECTS ON WHICH THE FOLLOWING OPERATION WILL BE PERFORMED SO THIS IS JUST TO ALLOW CREATION OG OBJECT LATER IN THE CODE
    BankDeposit(int p ,int y,float r );// r can be a value like 0.04
    BankDeposit(int p ,int y,int r );// r can be a value like 14
    void show();
};
BankDeposit ::BankDeposit(int p, int y ,float r){
    principal = p ;
    year = y ;
    interestRate =r;
    returnValue =principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 +interestRate);
    }
    
}

BankDeposit ::BankDeposit(int p, int y ,int r){//here value of r will be in percentage like 10 is 10% i.e in decimal 0.1
    principal = p ;
    year = y ;
    interestRate =float(r)/100; //this first converts r into float point  number and then divide it by 100 to convert into decimal 
    returnValue =principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 +interestRate);
    }
    
}
void BankDeposit :: show(){
    cout<<endl<<"Principal amount was " <<principal<<endl<<"Return value after  "<<year<<" year is "<<returnValue<<endl;
}
int main(){
   BankDeposit bd1 , bd2, bd3;
   int p , y;
   float r;
   int R;

   cout<<"Enter value of p y and r"<<endl;
   cin>>p>>y>>r;
   bd1 =BankDeposit(p, y , r);
   bd1.show();

   cout<<"Enter value of p y and R"<<endl;
   cin>>p>>y>>R;
   bd2 =BankDeposit(p, y , R);
   bd2.show();
   return 0;
}