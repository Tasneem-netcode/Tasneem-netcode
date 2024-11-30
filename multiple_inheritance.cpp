#include <iostream>
using namespace std;

//SYNTAX FOR MULTIPLE INHERITANCE
// class Derived: visibility-mode base1 , visibility-mode base2{
//     class body of derived class
// };

class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a ;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int = a ;
    }
};
class derived :public Base1 , public base2{
    public:
    void show(){
        cout<<"Values of base1"<<base1int <<endl;
        cout<<"Values of base2"<<base2int <<endl;
        cout<<"Sum  of base1 and 2 is "<<base1int +base2int <<endl;
    }
};
/*
data members :
   base1int  ---> protected
   base2int  ---> protected
Member Function :
 set_base1int() --->publlic
 set_base2int() --->publlic
 set_show() --->publlic
*/
int main(){
    derived harry;
    harry.set_base1int(244);
    harry.set_base2int(210);
    harry.show();

   return 0;
}