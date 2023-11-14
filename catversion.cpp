#include <iostream>
#include <string>
using namespace std;

// Class Dog
class cat {
public:
    string name;
    float age;

    // Constructor with default values
    cat(string n = "Unknown", float a = 1.0) : name(n), age(a) {}

    // Function to make noise
    void makeNoise() {
        cout << "meow\n";
    }

    // Function to celebrate birthday
    void celebrateBirthday() {
        age++;
    }
};

int main() {
    // Create a Dog object with initial values
    cat cat1("mincis", 2);

    // Display initial age
    cout << cat1.name << "'s age: " << cat1.age << endl;

    // Make noise
    cat1.makeNoise();

    // Celebrate birthday and display updated age
    cat1.celebrateBirthday();
    cout << "After celebrating birthday, " << cat1.name << "'s age: " << cat1.age << endl;

    // Make noise again
    cat1.makeNoise();

    return 0;
}
