// Include pre-processor directives.
#include <iostream>
#include <string>

#define FIRST_NAME "James"
#define LAST_NAME "Bachrach"
#define AGE 22
#define WEIGHT 310

// Use C++ standard library namespace.
using namespace std;

/* This function will use cout and the insertion operator
 to write data to stdout. */
 void output(void) {
    // cout is object of the output stream of a C++ application (terminal, file)
    // << is the insertion operator and it is used to show output to the 
    // output stream.
    // A newline character is not appended to the end of the output, so 
    // we must use the endl command.
    cout << "Your first name is " << FIRST_NAME << endl;
    cout << "Your last name is " << LAST_NAME << endl;
    cout << "Your weight is " << WEIGHT << " and your age is " << AGE << endl;
    cout << FIRST_NAME << " ";
    cout << LAST_NAME << endl;
 }

 /* This function will use cin and the extraction operator to input data from stdin. */
 void input() {
    // Declare variables to store input data.
    int age;
    float weight;
    string name;    // C++ has the string type.

    // Input an int from stdin.
    cout << "Enter your age: ";
    // cin is an object of the input stream of a C++ application (terminal, file)
    // >> is the extraction operator and its used to read input from
    // the input stream and place it in a variable.
    cin >> age;
    cout << "Entered age is: " << age << endl;

    // Input a float from stdin.
    cout << "Enter your weight: ";
    cin >> weight;
    cout << "Entered weight is: " << weight << endl;

    // Input a float and an int from stdin.
    cout << "Enter your weight and age seperated by a space: ";
    cin >> weight >> age;
    cout << "Entered weight is: " << weight << " and entered age is: " << age << endl;

    // Input a string.
    cout << "Enter your full name: ";
    // cin stops reading when it encounters an empty space.
    //cin >> name;
    // getline reads a full line from the input stream, including the newline
    // character generated when the Enter key is pushed. This can prevent it 
    // from reading the actual input string, so we must call the ignore 
    // function before calling getline to ignore the newline character.
    cin.ignore();
    getline(cin, name);
    cout << "Entered full name is: " << name << endl;
 }