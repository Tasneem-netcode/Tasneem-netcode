#include <iostream>
using namespace std;
// Destructors never takes an arguments and never returns any value
int count =0; //global variable

class num{
    public:
    num(){//constructor
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
    }

    ~num(){
        cout<<"this is the time when destructor is called for object number "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"We are inside our main function "<<endl;
    cout<<"Creating first object n1 "<<endl;
    num n1;{
        cout<<"Enteering this block "<<endl;
        cout<<"Creating 2 more objects "<<endl;
        num n2, n3;
        cout<<"Exiting this block "<<endl;

    }
    cout<<"Back to the main "<<endl;

   return 0;
}