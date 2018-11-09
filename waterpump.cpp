#include <iostream>
#include "waterpump.h"
#include <string>

using namespace std;

WaterPump::WaterPump() {
    this-> Name = "Name";
}
WaterPump::WaterPump(int PowerConsumptions,string Brand,int WaterCapacity,string Name,string Type,int amount,int LengthOfCable,int Public_first,string Public_second) {
    this->Name = Name;
    this->Type = Type;
    this->amount = amount;
    this->LengthOfCable = LengthOfCable;
    this->Brand = Brand;
    this->WaterCapacity = WaterCapacity;
    this->PowerConsumptions = PowerConsumptions;
    this->Public_first = Public_first;
    this->Public_second = Public_second;
}
WaterPump::~WaterPump() {
    std::cout << "This is destructor" << endl;
}
void WaterPump::GetClass() {

    std::cout << "Name: " << Name <<"\n" << "Type: " << Type <<"\n" << "Amount: " << amount <<"\n" << "LengthOfCable: " << LengthOfCable <<"\n" << "Brand: " << Brand <<"\n"<< "WaterCapacity: " << WaterCapacity <<"\n"<< "PowerConsumptions: " << PowerConsumptions <<"\n"<< "Public_first: " << Public_first <<"\n"<< "Public_second: " << Public_second <<"\n"<<  std::endl;
}
int WaterPump::GetPowerConsumptions() {

    return this->PowerConsumptions;
}
string WaterPump::GetBrand()  {

    return this->Brand;
}
int WaterPump::GetWaterCapacity()  {

    return this->WaterCapacity;
}