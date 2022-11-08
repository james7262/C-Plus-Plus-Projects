// Include pre-processor directives.
#include <iostream>
#include <string>

// Using C++ standard namespace
using namespace std;

// This function has 3 parameters and it also has a local variable.
void congratulate2 (string student, string course, string programmer) {
    // Declare and initialize a local variable by calling the string.length function. The C++ function length must
    // be used in C++ files.
    int days = programmer.length();
    // The C++ string type may not be formatterd using the %s format specifier, the string type must be converted 
    // to a const char * using the c_str() function before it may be formatted using the %s.
    // The preferred way to output the C++ string type is using cout.
    printf("%s has done as much %s programming as %s could fit into %d days.\n", student.c_str(), course.c_str(), 
        programmer.c_str(), days);
}

// This function has 3 parameters.
void congratulate1 (string student, string course, string programmer) {
    cout << student << " has done as much " << course << " programming as " << programmer << "." << endl;
    // Function declaration must appear in a file before calls may be made to the function.
    congratulate2(student, course, programmer);
}