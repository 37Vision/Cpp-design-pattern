#include "HouseBuilder.h"
class BigHouseBuilder :public HouseBuilder{
    void set_material() override{
        pHouse->set_material("stone");
    }
    void set_windows() override{
        pHouse->set_windows(4);
    }
};