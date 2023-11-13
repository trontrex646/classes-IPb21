#include <iostream>
#include <string>
using namespace std;

// Class Dog
class Dog {
public:
    string name;
    float age;

    // Constructor with default values
    Dog(string n = "Unknown", float a = 1.0) : name(n), age(a) {}

    // Function to make noise
    void makeNoise() {
        cout << "woof\n";
    }

    // Function to celebrate birthday
    void celebrateBirthday() {
        age++;
    }
};

int main() {
    // Create a Dog object with initial values
    Dog dog1("Reksis", 6);

    // Display initial age
    cout << dog1.name << "'s age: " << dog1.age << endl;

    // Make noise
    dog1.makeNoise();

    // Celebrate birthday and display updated age
    dog1.celebrateBirthday();
    cout << "After celebrating birthday, " << dog1.name << "'s age: " << dog1.age << endl;

    // Make noise again
    dog1.makeNoise();

    return 0;
}
