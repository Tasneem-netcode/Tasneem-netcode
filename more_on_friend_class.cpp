#include <iostream>
using namespace std;

class Y; // forward declataionn 
class X{
    int data;
    public:
    void setvalue(int value){
        data = value ;
    }
    friend void add(X , Y);
};

class Y{
    int num;
    public:
    void setvalue(int value){
        num = value ;
    }
    friend void add(X ,Y );
};

void add(X o1 , Y o2){
    cout<<"Summing data of X and Y objects gives me "<<o1.data + o2.num;
}
int main(){
    X a;
    a.setvalue(5);

    Y b;
    b.setvalue(2);
    add(a , b);
   return 0;
}