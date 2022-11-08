// Include pre-processor directives.
#include <iostream>

// A struct is a collection of related data (members). The members may only be fields (variables) 
// and can be of different types.
// Declare a struct named Person.
struct Person
{
    // Declare two members in the Person struct.
    float heightInMeters;
    int weightInKilos;
};

// Use C++ standard library namespace.
using namespace std;

/* This function use the Person struct for purposes of displaying the values in its members. */
void accessStructMembers(void) {
    // Declare a Person struct.
    struct Person person;

    // Assign values to the members of the Person struct.
    person.heightInMeters = 1.8;
    person.weightInKilos = 96;  

    // Display the values in members.
    cout << "Person's weight is " << person.weightInKilos << " kilograms." << endl;
    cout << "Person's height is " << person.heightInMeters << " meters." << endl;
}