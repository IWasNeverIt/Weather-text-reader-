#include <iostream>

using namespace std;

class Car {

private:
    int yearModel;
    string make;
    string model;
    int speed;
public:
    Car(); 
    Car(int, string, string, int); 
    ~Car(); 
    void setYearModel(int yr)
    {
        yearModel = yr;
    }
    void setMake(string mk)
    {
        make = mk;
    }
    void setModel(string md)
    {
        model = md;
    }
    void setSpeed(int spd)
    {
        speed = spd;
    }
    void accelerator()
    {
        speed += 5;
    }
    void accelerator(int amt)
    {
        speed += amt;
    }
    void brake()
    {
        speed -= 5;
    }
    void brake(int amt)
    {
        speed -= amt;
    }
    void print();

    int getYearModel() const
    {
        return yearModel;
    }
    string getMake() const
    {
        return make;
    }
    string getModel() const
    {
        return model;
    }
    int getSpeed() const
    {
        return speed;
    }
};

Car::~Car() {
    cout << "\nCar object destroyed.";
}

Car::Car() {
    yearModel = 2021;
    make = "Toyota";
    model = "Camry";
    speed = 0;
}

Car::Car(int yr, string mk, string mod, int spd) {
    yearModel = yr;
    make = mk;
    model = mod;
    speed = spd;
}

void Car::print() {
    cout << "Year Model: " << yearModel << endl;
    cout << "Current Speed: " << speed << " MPH" << endl;
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
}


int main() {

    Car c1;
    Car c2(2020, "Ford", "Taurus", 75);

    c1.setSpeed(50);
    c1.accelerator();
    c1.accelerator();

    c2.accelerator(9);
    c2.brake();
    c2.brake();

    cout << "\tCar #1:\n";
    c1.print();

    cout << "\n\tCar #2:\n";
    c2.print();

    return 0;
}