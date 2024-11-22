#include <iostream>
using namespace std;

class Grades {
private:
    int scores[4]; // Private array to store grades

public:
    void setScore(int index, int score) {
        if (index >= 0 && index < 4) { // Check for valid index
            scores[index] = score;
        }
    }

    int getScore(int index) const {
        if (index >= 0 && index < 4) {
            return scores[index];
        }
        return -1; // Return -1 if index is invalid
    }
};

int main(){
    // int s ,i;
    // cout<<"Enter index "<<endl;
    // cin>>i;
    // cout<<"Enter score "<<endl;
    // cin>>s;
    Grades obj;
    obj.setScore(0,10);
    obj.setScore(1,15);
    obj.setScore(2,4);
    obj.setScore(3,23);
    obj.getScore(0);
    obj.getScore(2);
   return 0;
}