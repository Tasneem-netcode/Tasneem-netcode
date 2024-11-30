#include <iostream>
using namespace std;
class Base1{
   public:
   void greet(){
    cout<<"How are you "<<endl;
   }
};
class Base2{
    public:
    void greet(){
    cout<<"Kaisan baaaa "<<endl;
   }
};

class Derived :public Base1 , public Base2{
  int a ;
  public:
  void greet(){ //this thing calls my base1 class ka greet method and now there is no confusion for the compiler
    Base1 ::greet();
  }
};
class B{
    int a ;
    public:
    void say(){
        cout<<"Hello world "<<endl;
    }
};
class D :public B{
    int a ;
    public:
    void say(){
        cout<<"Hello world , how you doing "<<endl;
    }
};
int main(){
    // Base1 obj1;
    // obj1.greet();
    // Base2 obj2;
    // obj2.greet();
    // Derived d;
    // d.greet(); //error 
//Abiguity 2
   B b ;
   b.say();

   D d2;
   d2.say();
   return 0;
}