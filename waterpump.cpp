#include <iostream>
#include "waterpump.h"
#include <string>

using namespace std;

WaterPump::WaterPump() {
    this->name = "Name";
}

WaterPump::WaterPump(int powerСnsumptions, string Brand, int waterCapacity, string Name, string Type, int amount,
                     int LengthOfCable, int publicFirst, string publicSecond) {
    this->name = Name;
    this->type = Type;
    this->amount = amount;
    this->lengthOfCable = LengthOfCable;
    this->brand = Brand;
    this->waterCapacity = waterCapacity;
    this->powerConsumptions = powerСnsumptions;
    this->publicFirst = publicFirst;
    this->publicSecond = publicSecond;
}

WaterPump::~WaterPump() {
    std::cout << "This is destructor" << endl;
}

void WaterPump::getClass() {

    std::cout << "Name: " << name << "\n" << "Type: " << type << "\n" << "Amount: " << amount << "\n"
              << "LengthOfCable: " << lengthOfCable << "\n" << "Brand: " << brand << "\n" << "waterCapacity: "
              << waterCapacity << "\n" << "powerСnsumptions: " << powerConsumptions << "\n" << "publicFirst: "
              << publicFirst << "\n" << "publicSecond: " << publicSecond << "\n" << std::endl;
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
