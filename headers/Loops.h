// Include pre-processor directives.
#include <iostream>
#define STOP 0
#define START 10

// Defined macro expressions.
#define condition(i) (i > STOP)
#define break(i) (i == 5)
#define continue(i) (i % 2)

// Using C++ standard namespace
using namespace std;

// This function will use a while loop.
void loops1 (void) {
    // Declare loop counter variable and initialize it.
    int i = START;

    // Set up while loop.
    // Use macro expression as condition of while loop.
    while (condition(i)) {
        cout << i << " ";
        i--;
    }
    cout << "Blastoff!" << endl;
}