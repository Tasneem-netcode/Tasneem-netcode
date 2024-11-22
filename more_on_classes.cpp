    // OOPs - classes and objects
    // C++ --> initially called as --> C with classes
    //  Classes --> extension of structures (in c and c ++)
    // Structures have limitations :
    //            - members are public bydefault
    //            -No methods can be used
    //            - Used only to store data
    // Classes  -->structure + more properties
    // Classes -->have methods and properties
    //  we can declare and define functions in classes
    // classes -->members can be public or also private
    //  access specifiers
    //  ------public
    //  ------private
    //-------protected
    //  In classes we can declare objects along with the class declaration like this :
    //  class employee{
    // classs definition
    //    }harry, suvam ,haaris; //harry , suvam, haaris are objects
    // harry.salary = 400 //(this make so sence if salary is private , we need a methodor a member fuction tpo acces private variables in classes)#include <iostream>

//Nesting of member functions
#include<iostream>
#include <string>
using namespace std;
class binary
{
    private:
    string s; //bydefault private
    void chk_bin(void);

public:
    void read(void);    // yani yeh function kuch nai leta hai
    // void chk_bin(void); // check function declared
    void ones(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        { // at: string ke andar jo i index mae character hai vo agar 1 ya 0 ke equal nai rha toh print not binary
            cout << "The number is not binary " << endl;
            exit(0); // exit program with error code 0
        }
    }
}
// to find 1s complement of given binary number
void binary ::ones(void)
{
    chk_bin();//function call within the function no need to call again in main function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else{
        
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout<<"1 s complement is "<<endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{


    binary b; // b is a number of binary class
    b.read();
    // b.chk_bin();//now i cant use this function here as it is private but this function will still work as it is called in ones function
    b.ones();
    b.display();

    return 0;
}