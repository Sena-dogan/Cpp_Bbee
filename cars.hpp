#include <iostream>
#pragma once

using namespace std;

class Cars
{
private: // Private access specifier
    string brand; 
    string model;
    string name;
    string engineType;
    int cylinders;
    int hp;
    int fuel_capacity;

public:
    Cars(void); // constructor
    void print();
    void honk();
    void get_fuel(int fuel);
};

class Musclecars
{
private:
    /* data */
public:
    Musclecars(/* args */);
};

Musclecars::Musclecars(/* args */)
{
}


class jdm : public Cars
{
    private:
        bool has_vtec;
        int turbo_count;
        string engineType;
        int seats;

    public:
        jdm(void);
        void turbo();
};

