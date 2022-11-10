// Inlcude pre-processor directives.
#include <iostream>

// Using C++ standard library namespace.
using namespace std;

// Declare the class.
class Geometry {
    /* Class members (fields, constructors and methods may have the following access modifiers:
    private, public and protected.)
    This class is goingt to be an abstract class (like a Java interface) b/c its only method is 
    going to be virtual; it will have a declaration but no body. Must use the keyword virtual when 
    declaring virtual methods and must initialize virtual methods to zero. */
    public:
        virtual void compute() = 0;
};