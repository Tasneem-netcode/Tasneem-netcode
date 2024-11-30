#include <iostream>
using namespace std;
class Simple{
    int data1;
    int data2;
    int data3;
    public:
    Simple(int a, int b=9 , int c =4){//default value is 9
        data1 = a ;
        data2 = b ;
        data3 = c ;

    }
    void printnumber();
}; 
void Simple ::printnumber(){
    cout<<"The size of data is "<<data1 <<", "<<data2<<"and data 3 is"<<data3<<endl;
}
int main(){
    // Simple s(1,4);
    // Simple s(12 , 13, 14);
    Simple s(12 , 13);
    s.printnumber();
   return 0;
}