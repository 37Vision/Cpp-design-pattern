#include "House.h"
#include <memory>

#ifndef HOUSE_BUILDER_H
#define HOUSE_BUILDER_H
class HouseBuilder
{
protected:
    std::shared_ptr<House> pHouse;
public:
    virtual void set_material() = 0;
    virtual void set_windows() = 0;
    std::shared_ptr<House> getResult(){return pHouse;}
    virtual ~HouseBuilder() = default;
    HouseBuilder(){
        pHouse = std::make_shared<House>();
    }
};
#endif