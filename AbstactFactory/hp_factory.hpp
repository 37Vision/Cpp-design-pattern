#include "abstract_factory.h"
#include "hp_product.hpp"
class HpFactory:public AbstactFactory{
    std::shared_ptr<Mouse>  create_mouse() override;
    std::shared_ptr<KeyBoard>  create_keyboard() override;
};

std::shared_ptr<Mouse> HpFactory::create_mouse(){
    return std::make_shared<HpMouse>();
}

std::shared_ptr<KeyBoard> HpFactory::create_keyboard(){
    return std::make_shared<HpKeyBoard>();
}