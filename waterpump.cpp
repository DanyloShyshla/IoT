#include <iostream>
#include "waterpump.h"
#include <string>

using namespace std;

WaterPump::WaterPump() {
    this->name = "Name";
}

WaterPump::WaterPump(int powerConsumptions, string Brand, int waterCapacity, string Name, string Type, int amount,
                     int LengthOfCable, int public_first, string public_second) {
    this->name = Name;
    this->type = Type;
    this->amount = amount;
    this->lengthOfCable = LengthOfCable;
    this->brand = Brand;
    this->waterCapacity = waterCapacity;
    this->powerConsumptions = powerConsumptions;
    this->public_first = public_first;
    this->public_second = public_second;
}

WaterPump::~WaterPump() {
    std::cout << "This is destructor" << endl;
}

void WaterPump::getClass() {

    std::cout << "Name: " << name << "\n" << "Type: " << type << "\n" << "Amount: " << amount << "\n"
              << "LengthOfCable: " << lengthOfCable << "\n" << "Brand: " << brand << "\n" << "waterCapacity: "
              << waterCapacity << "\n" << "powerConsumptions: " << powerConsumptions << "\n" << "public_first: "
              << public_first << "\n" << "public_second: " << public_second << "\n" << std::endl;
}

int WaterPump::getPowerConsumptions() {

    return this->powerConsumptions;
}

string WaterPump::getBrand() {

    return this->brand;
}

int WaterPump::getWaterCapacity() {

    return this->waterCapacity;
}
