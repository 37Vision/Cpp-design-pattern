#include "HouseBuilder.h"

class Director
{
private:
    std::shared_ptr<HouseBuilder> pHouseBuilder;
public:
    std::shared_ptr<House> Constuct(){
        pHouseBuilder->set_material();
        pHouseBuilder->set_windows();
        return pHouseBuilder->getResult();
    }
    explicit Director(std::shared_ptr<HouseBuilder> _HouseBuilder){
        pHouseBuilder = _HouseBuilder;
    }
};
