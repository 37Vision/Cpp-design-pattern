#include "HouseBuilder.h"
class SmallHouseBuilder :public HouseBuilder{
    void set_material() override{
        pHouse->set_material("wood");
    }
    void set_windows() override{
        pHouse->set_windows(1);
    }
};