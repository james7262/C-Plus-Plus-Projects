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

// Declare another struct for Person using a type definition. A type definition defines an alias for a 
// struct that allows the alias to be used like a primitive data type.
typedef struct {
    // Declare two members in the Person struct.
    float heightInMeters;
    int weightInKilos;
} PersonType; // This is the alias.

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

    // Declare a Person struct using the alias (type definition).
    PersonType p;

    // Assign values to the members of the Person struct.
    p.heightInMeters = 1.8;
    p.weightInKilos = 96;

    // Display the values in members.
    cout << "Person's weight is " << person.weightInKilos << " kilograms." << endl;
    cout << "Person's height is " << person.heightInMeters << " meters." << endl;
}

/* This function will have a struct as a parameter. It will compute and return the BMI of the Person struct.*/
float bodyMassIndex(struct Person p) {
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}