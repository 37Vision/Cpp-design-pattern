#include "Director.h"
#include "BigHouseBuilder.h"
#include "SmallHouseBuilder.h"
#include <iostream>
//Builder模式主要用于”分步骤构建一个复杂的对象“，其中分步骤是一个稳定的算法，复杂对象的各个部分经常变化。
//本例中，组装房子是一个稳定的算法，但是房子的材料和窗户数量是可变的
int main(){
    {
        auto pBigHouseBuilder = std::make_shared<BigHouseBuilder>();
        auto pDirector = std::make_shared<Director>(pBigHouseBuilder);
        auto pHouse = pDirector->Constuct();
        std::cout << "house's material is " << pHouse->get_material() << " and the number of window is " << pHouse->get_windows() << std::endl;
    }

    {
        auto pSmallHouseBuilder = std::make_shared<SmallHouseBuilder>();
        auto pDirector = std::make_shared<Director>(pSmallHouseBuilder);
        auto pHouse = pDirector->Constuct();
        std::cout << "house's material is " << pHouse->get_material() << " and the number of window is " << pHouse->get_windows() << std::endl;
    }
}