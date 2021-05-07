#include "abstract_keyboard.h"
#include "abstract_mouse.h"
#include <iostream>

class HpMouse:public Mouse {
    void say_hello() override;
};

class HpKeyBoard:public KeyBoard{
    void say_hello() override;
};

void HpMouse::say_hello(){
    std::cout << "this is Hp mouse" << std::endl;
}

void HpKeyBoard::say_hello(){
    std::cout << "this is Hp keyboard" << std::endl;
}