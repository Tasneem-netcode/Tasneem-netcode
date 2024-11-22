#include <iostream>
using namespace std;

class Sample {
    int numbers[5]; // Array of 5 integers as a data member

public:
    // Function to set values in the array
    void setValues() {
        for (int i = 0; i < 5; i++) {
            numbers[i] = i * 10; // Assigning values to each array element
        }
    }

    // Function to display values in the array
    void displayValues() {
        for (int i = 0; i < 5; i++) {
            cout << "Element " << i << ": " << numbers[i] << endl;
        }
    }
};

int main() {
    Sample obj;        // Create an object of Sample
    obj.setValues();   // Set values in the array
    obj.displayValues(); // Display the array elements

    return 0;
}
