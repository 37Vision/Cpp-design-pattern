#include "factory_producer.hpp"

//提供一个接口，让该接口负责创建一系列“相关或者相互依赖的对象”，无需指定它们具体的类。重点是一系列产品，即产品族，比如此例子的键盘和鼠标。
int main(){
    auto af = FactoryProducer::get_factory("dell");
    if(af == nullptr)
        return 0;
    std::shared_ptr<Mouse> dell_mouse = af->create_mouse();
    std::shared_ptr<KeyBoard> dell_keyboard = af->create_keyboard();
    dell_mouse->say_hello();
    dell_keyboard->say_hello();
}