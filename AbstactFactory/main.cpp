#include "factory_producer.hpp"
int main(){
    auto af = FactoryProducer::get_factory("dell");
    if(af == nullptr)
        return 0;
    std::shared_ptr<Mouse> dell_mouse = af->create_mouse();
    std::shared_ptr<KeyBoard> dell_keyboard = af->create_keyboard();
    dell_mouse->say_hello();
    dell_keyboard->say_hello();
}