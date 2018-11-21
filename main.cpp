#include <iostream>
#include "waterpump.h"
#include <string>

using namespace std;

int main() {
    WaterPump One(10, "susu", 400, "K-48", "normal", 3, 40, 1, "public_1");
    WaterPump Two(20, "nihe", 100, "K-39", "normal", 3, 40, 1, "public_1");
    WaterPump Three(30, "koche", 450, "L-65", "normal", 3, 40, 1, "public_1");
    One.getClass();
    Two.getClass();
    Three.getClass();
}
