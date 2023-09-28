#include <iostream>

// Define a class named Complex to represent complex numbers
class Complex {
public:
    double real;         // Real part of the complex number
    double imaginary;    // Imaginary part of the complex number

    // Constructor to initialize the complex number with default values (0.0)
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    // Overload the addition operator (+) to add two complex numbers
    Complex operator+ (const Complex &c) {
        //! this is working only because in const part we have given default value 
        //! warna humko yaha par alag se deni padti 
        // complex result(0.0,0.0) aise banana padta agar hum const nahi banate 
        // humne jab likha complex result , tab apne aap default values result ke complex or imag me chali gai 
        // ya fir agar banate or usme hum default value nahi dete 
        Complex result;
        result.real = this->real + c.real;
        result.imaginary = this->imaginary + c.imaginary;
        return result;
    }

    // Overload the equality operator (==) to compare two complex numbers for equality
    bool operator== (const Complex &c) {
        return (this->real == c.real) && (this->imaginary == c.imaginary);
    }
};

int main() {
    // Create two complex numbers, c1 and c2, with specific values
    Complex c1(2.0, 3.0);
    Complex c2(1.0, 2.0);

    // Add c1 and c2 using the overloaded + operator, and store the result in c3
    Complex c3 = c1 + c2;

    // Display the result of the addition
    std::cout << "c3 = " << c3.real << " + " << c3.imaginary << "i" << std::endl;

    // Compare c1 and c2 for equality using the overloaded == operator
    if (c1 == c2) {
        std::cout << "c1 and c2 are equal." << std::endl;
    } else {
        std::cout << "c1 and c2 are not equal." << std::endl;
    }

    return 0;
}
