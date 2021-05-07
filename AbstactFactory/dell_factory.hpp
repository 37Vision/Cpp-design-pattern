#include "abstract_factory.h"
#include "dell_product.hpp"
class DellFactory:public AbstactFactory{
    std::shared_ptr<Mouse>  create_mouse() override;
    std::shared_ptr<KeyBoard>  create_keyboard() override;
};

std::shared_ptr<Mouse> DellFactory::create_mouse(){
    return std::make_shared<DellMouse>();
}

std::shared_ptr<KeyBoard> DellFactory::create_keyboard(){
    return std::make_shared<DellKeyBoard>();
}