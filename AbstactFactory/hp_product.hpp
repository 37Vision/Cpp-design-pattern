#include "abstract_keyboard.h"
#include "abstract_mouse.h"
#include <iostream>

class HpMouse:public Mouse {
public:
    void say_hello() override;
    virtual ~HpMouse() = default;
};

class HpKeyBoard:public KeyBoard{
public:
    void say_hello() override;
    virtual ~HpKeyBoard() = default;
};

void HpMouse::say_hello(){
    std::cout << "this is Hp mouse" << std::endl;
}

void HpKeyBoard::say_hello(){
    std::cout << "this is Hp keyboard" << std::endl;
}