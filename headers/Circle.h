// Inlcude pre-processor directives.
#include <iostream>
#include <stdexcept> // Needed to throw exceptions.
#include <iomanip>   // Needed to format output.
#include <math.h>    // Needed to perform area computation.
#include <Geometry.h>

#define PI 3.141592653589793238

// Using C++ standard library namespace.
using namespace std;

// Declare the Circle class and specify that its a subclass of Geometry.
class Circle : Geometry {
    private:
        // Declare fields.
        int radius;
        double area;
    public:
        // Declare constructors.
        Circle();
        Circle(int);
        // Declare setter and getter method for radius field.
        void setRadius(int);
        // The const keyword at the end of the method declares that the method will not change any of the 
        // field values. Attempting to do so will result in a compiler error.
        void getRadius(int&) const;
        // Declare a getter for the area field.
        void getArea(double&) const;
        void compute() override;
        void printCircle() const;
        bool equalCircle(const Circle&) const;
};

/* Class constructors and methods may be defined inside the class where they are declared. They may also be 
defined outside of the body of the class, but when they are their names must be preficed with the name of 
the class and the resolution operator :: .*/
Circle :: Circle() {
    radius = 0;
}

Circle :: Circle(int radius) {
    // Check if we've been given an invalid argument - radius that is less than zero.
    if (radius < 0) {
        // Throw an exception.
        throw invalid_argument("Radius must be greater than or equal to zero.");
    }
    this->radius = radius;
}

void Circle :: setRadius(int radius) {
    // Check if we've been given an invalid argument - radius that is less than zero.
    if (radius < 0) {
        // Throw an exception.
        throw invalid_argument("Radius must be greater than or equal to zero.");
    }
    this->radius = radius;
}

void Circle :: getRadius(int& radius) const {
    // Place radius field value in specified radius.
    radius = this->radius;
}

void Circle :: getArea(double& area) const {
    area = this->area;
}

void Circle :: compute() {
    area = PI * pow(radius, 2);
}

void Circle :: printCircle() const {
    cout << fixed << showpoint;
    cout << setprecision(5);
    cout << "radius=" << radius << ", area=" << area << endl;
}

bool Circle :: equalCircle(const Circle& otherCircle) const {
    return (radius == otherCircle.radius && area == otherCircle.area);
}