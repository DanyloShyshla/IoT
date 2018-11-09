#include <string>

using namespace std;

class WaterPump{

public:
    int Public_first;
    string Public_second;
    int PowerConsumptions;
    string Brand;
    int WaterCapacity;
    void GetClass();
    int GetPowerConsumptions();
    string GetBrand();
    int GetWaterCapacity();
    WaterPump();
    WaterPump(int PowerConsumptions,string Brand,int WaterCapacity,string Name,string Type,int amount,int LengthOfCable,int Public_first,string Public_second);
    ~WaterPump();

private:
    string Name;
    string Type;
protected:
    int amount;
    int LengthOfCable;

};
