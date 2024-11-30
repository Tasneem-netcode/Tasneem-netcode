#include <iostream>
using namespace std;
class Base{
   protected:
   int a;// it is a private variable but can be inherited to other class 
   private:
   int b;
};

class Derived :protected Base{

};
int main(){
    Base b ;
    Derived d ;
    // cout<<b.a; //error since a is protected
    // cout<<d.a; //error

   return 0;
}