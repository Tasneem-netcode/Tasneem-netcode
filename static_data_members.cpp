#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count;//static member to count the numbers of employee 
    public:
         void setData(void){
             cout<<"Enter employee id"<<endl;
             cin>>id; 
            //  count++ ;   
         }
         void getData(void){
            cout<<"the employee id is "<<id<<"and employee number is "<<count<<endl;
         }
        //Static function that runs only in static variables 
         static void getCount(void){
            // cout<<id;//throws an error
            count++;
            cout<<"the value of count is "<<count<<endl;
         }
};

int Employee :: count; //Default value is 0
int main(){
    Employee haaris,suvam,faiz;
    haaris.setData();
    haaris.getData();
    Employee::getCount();

    suvam.setData();
    suvam.getData();
    Employee::getCount();

    faiz.setData();
    faiz.getData();
    Employee::getCount();




   return 0;
} 