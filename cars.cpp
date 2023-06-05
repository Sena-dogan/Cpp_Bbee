#include "cars.hpp"

Cars::Cars(void)
{
    cout << "Enter Car Brand" << endl;
    cin >> this->brand;
    cout << "Enter Car Model" << endl;
    cin >> this->model;
    cout << "Enter Car Name" << endl;
    cin >> this->name;
    cout << "Enter Engine Type" << endl;
    cin >> this->engineType;
    cout << "Enter Number of Cylinders" << endl;
    cin >> this->cylinders;
    cout << "Enter Horsepower" << endl;
    cin >> this->hp;
    cout << "Enter Fuel Capacity" << endl;
    cin >> this->fuel_capacity;

    print();
}

void    Cars::honk()
{
    cout << "BEEP BEEP" << endl;
}

void    Cars::get_fuel(int fuel)
{
    this->fuel_capacity += fuel;
    cout << "You now have " << this->fuel_capacity << " gallons of fuel" << endl;
}


void    Cars::print()
{
    cout << this->brand << " " << this->model << " " << this->name << " " << this->engineType << this->cylinders << endl;
}

jdm::jdm(void)
{
    this->has_vtec = true;
    this->turbo_count = 1;
    this->engineType = "I";
    this->seats = 2;

}

void    jdm::turbo()
{
    if (this->turbo_count != 0)
        cout << "TURBO" << endl;
}