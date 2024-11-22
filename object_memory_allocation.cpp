#include <iostream>
using namespace std;
class Shop{
    int itemId[100];//array with size 100
    int itemPrice[100];//array with size 100
    int counter;//to track items that are added in cart

    public:
    void initCounter(void){counter = 0;}//initial value of counter is zero 
    void setPrice(void);
    void displayPrice(void);

};
void Shop ::setPrice(void){
    cout<<"Enter Id of your Item no "<<counter + 1<<endl;
    cin>>itemId[counter];//counter index hai
    cout<<"Enter prize of your item "<<endl;
    cin>>itemPrice[counter];//counter index hai
    counter++;
}
void Shop ::displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with id "<<itemId[i]<<"is "<<itemPrice[i]<<endl;
    }
    
}


int main(){
    Shop dukaan;
    dukaan.initCounter();
    int numItems;
    cout<<"Enter the number of items to add: ";
    cin>>numItems;

    for (int i = 0; i <numItems; i++)
    {
        dukaan.setPrice();
    }
    
    // dukaan.setPrice();
    // dukaan.setPrice();
    // dukaan.setPrice();
    dukaan.displayPrice();
    
   return 0;
}