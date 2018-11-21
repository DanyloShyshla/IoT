#include <string>

using namespace std;

class WaterPump {

public:
    int public_first;
    string public_second;
    int powerConsumptions;
    string brand;
    int waterCapacity;

    void getClass();

    int getPowerConsumptions();

    string getBrand();

    int getWaterCapacity();

    WaterPump();

    WaterPump(int powerConsumptions, string brand, int waterCapacity, string name, string type, int amount,
              int lengthOfCable, int public_first, string public_second);

    ~WaterPump();

private:
    string name;
    string type;
protected:
    int amount;
    int lengthOfCable;

};
