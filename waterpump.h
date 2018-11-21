#include <string>

using namespace std;

class WaterPump {

public:
    int publicFirst;
    string publicSecond;
    int powerConsumptions;
    string brand;
    int waterCapacity;

    void getClass();

    int getPowerConsumptions();

    string getBrand();

    int getWaterCapacity();

    WaterPump();

    WaterPump(int powerConsumptions, string brand, int waterCapacity, string name, string type, int amount,
              int lengthOfCable, int publicFirst, string publicSecond);

    ~WaterPump();

private:
    string name;
    string type;
protected:
    int amount;
    int lengthOfCable;

};
