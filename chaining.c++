//! this code is wrong because in chaining we always have to retun the refrence in the fuhnction 
//! we always return *this to achieve that 

// #include <iostream>
// #include <string>
// using namespace std;

// class Person {
// public:
//     string name;
//     int age;
//     string address;

//     // Constructor to initialize the Person object
//     Person() : age(0), name(""), address("") {}

//     void setName(const string& n) {
//         this->name = n;
//     }

//     void setAge(int a) {
//         this->age = a;
//     }

//     void setAddress(const string& addr) {
//         this->address = addr;
//     }
// };

// int main() {
//     Person person;

//     // Method chaining to set multiple attributes in a single line
//     person.setName("Alice").setAge(30).setAddress("123 Main St");

//     // Display the attributes
//     cout << "Name: " << person.name << endl;
//     cout << "Age: " << person.age << endl;
//     cout << "Address: " << person.address << endl;

//     return 0;
// }

//!RIGHT CODE 
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    string address;

    // Constructor to initialize the Person object
    Person() : age(0), name(""), address("") {}

    // Method to set the name and return a reference to the object
    Person& setName(const string& n) {
        this->name = n;
        return *this; // Return a reference to the current object
    }

    // Method to set the age and return a reference to the object
    Person& setAge(int a) {
        this->age = a;
        return *this;
    }

    // Method to set the address and return a reference to the object
    Person& setAddress(const string& addr) {
        this->address = addr;
        return *this;
    }
};

int main() {
    Person person;

    // Method chaining to set multiple attributes in a single line
    person.setName("Alice").setAge(30).setAddress("123 Main St");

    // Display the attributes
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Address: " << person.address << endl;

    return 0;
}
