#include <iostream>
using namespace std;
class c2; //forward declartion
class c1{
    int val1;
    friend void exchange(c1 & , c2 & );// friend hai exchange that takes c1 class ka reference 
    
    public:
    void indata(int a){
        val1=a;
    }
    void display(void){
        cout<<val1<<endl;
    }
};
class c2{
    int val2;
        friend void exchange(c1 & , c2 & );

    public:
    void indata(int a){
        val2=a;
    }
    void display(void){
        cout<<val2<<endl;
    }
};
void exchange(c1 &x,c2 &y){ // call by reference
// TO SWAP 2 NUMBERS 
    int tmp =x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;


}
int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(12);
    oc2.indata(16);

    exchange(oc1 , oc2);

    cout<<"The value after excahnging becomes: ";
    oc1.display(); 
    cout<<"The value after excahnging becomes: ";
    oc2.display() ;

   return 0;
}