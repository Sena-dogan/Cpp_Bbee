#include "cars.hpp"

int main()
{
    // cars Mustang("Ford", "Mustang", "GT500", "V", 8);
    // cars Challenger("Dodge", "Challenger", "HellCat", "V", 8);
    // cars Corvette("Chevy", "Corvette", "C2", "V", 10);
    // cars R34("Nissan", "R34", "Skyline", "I", 6);
    // cars Camaro("Chevy", "Camaro", "BUMBLEBEE", "V", 8);
    // cars Supra("Toyota", "Supra", "MK4", "I", 6);

    Cars Mustang;
    jdm R34;

    Mustang.get_fuel(10);
    Mustang.honk();
    R34.honk();
    R34.get_fuel(20);

}
