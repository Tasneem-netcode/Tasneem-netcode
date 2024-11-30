#include <iostream>
using namespace std;
//base class (parent)
class Employee{
    public:
    int id ;
    float salary;
    Employee(int inpId){//constructor
        id =inpId;
        salary = 12.6;
    }
    Employee(){} //default constructor of employee
};

//Derived class (child)syntax
/* class {{derived-class-name}} : {{visibbility-mode}} {{base-class-name}}
// {
    // class members and methods
// }
Note:
1. Default visibility class is private.
2.Public visibility mode:Public members of the base class will become public members of derived class
3.Private visibility mode:Public members of the base class will become private members of derived class
4. Private members are never inherited 
//Creating a programmer class derived from employee base class
*/
class Programmer :  public Employee{
    public:
    int languageCode;
    Programmer(int inpId){
        id = inpId;
     languageCode = 9; //new member added in this class
    }
     void getdata(){
        cout<<id<<endl;
     }
};

int main(){
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillF(11);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getdata();
   return 0;
}