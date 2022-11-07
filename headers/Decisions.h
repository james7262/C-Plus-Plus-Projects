// Include pre-processor directives.
#include <iostream>
#define NUM 34568.80

// Use C++ standard library namespace.
using namespace std;

// This function will use the comparison operators, and the if, if-else,
// if-else-if statements.
void decisions1 (void) {
    // Declare a variable of type float, initialize it using constant
    // defined in header file.
    float num = NUM;

    // Use if statement.
    if (num < 40000.0) {
        cout << "Num " << num << "is less than 40000.0." << endl; // Displayed.
    }
    num += num;

    // Use if-else statement.
    if (num < 40000.0) {
        cout << "Num " << num << "is less than 40000.0." << endl; // Not displayed.
    } else {
        cout << "Num " << num << "is not less than 40000.0." << endl; // Displayed.

    }
    num = 0.0;


    // Use if-else-if statement.
    if (num == 0.0) {
        cout << "Num " << num << "is equal to 0.0." << endl; // Displayed.
    } else if (num < 40000.0) {
        cout << "Num " << num << "is less than 40000.0." << endl; // Not displayed.
    } else {
        cout << "Num " << num << "is not less than 40000.0 and is not equal to 0.0." << endl; // Not displayed.
    }
}