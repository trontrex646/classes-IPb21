// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// Klase Car
class Car {
    // īpašība brand publisk
    // un mileage privātu
    public:
        string brand;
        
        Car(string b, float m) {
            brand = b;
            mileage = m;
            cout << brand << " is created \n";
        }
        
        Car(string br) {
            brand = br;
            cout << brand << " is created \n";
        }
        
        ~Car() {
            cout << brand << " is dead \n";
        }
        
        
        void makeNoise() {
            cout << "Beep, beep \n";
        };
        
    
    private:
        float mileage = 10.2;
};

int main() {
    Car car1("Dacia", 19200);
    car1.makeNoise();
    
    Car* car2 = new Car("Mini");
    car2->makeNoise();

    return 0;
}
