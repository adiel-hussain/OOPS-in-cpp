#include <iostream>
using namespace std;
class Vehicle {
public:
    string registrationNumber;
    string companyName;
public:
    Vehicle(string r, string c) {
        registrationNumber = r;
        companyName = c;
    }
};

class Car : public Vehicle {
public:
    string fuelType;
    int engineCapacity;

public:
    Car(string r, string c, string f, int e)
        : Vehicle(r, c) {
        fuelType = f;
        engineCapacity = e;
    }

    void display() {
        cout << "Car Details" <<" "<<<< "Registration Number: " << registrationNumber <<" " << "Company: " << companyName <<" "<<"Fuel Type: " << fuelType<<" " << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

class Bike : public Vehicle {
public:
    string fuelType;
    int engineCapacity;

public:
    Bike(string r, string c, string f, int e)
        : Vehicle(r, c) {
        fuelType = f;
        engineCapacity = e;
    }

    void display() {
        cout << "Bike Details" <<" "<< "registration number :" << registrationNumber <<" "<< "Company: " << companyName <<" "<< "Fuel Type: " << fuelType <<" " <<"Engine Capacity: " << engineCapacity <<"cc"<<endl;
        cout << endl;
    }
};

int main() {

    Car c1("1234", "Toyota", "Petrol", 1500);
    Bike b1("5678", "Honda", "Petrol", 125);

    c1.display();
    b1.display();

    return 0;
}