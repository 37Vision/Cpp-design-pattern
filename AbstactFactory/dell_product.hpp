#include "abstract_keyboard.h"
#include "abstract_mouse.h"
#include <iostream>

class DellMouse:public Mouse {
    void say_hello() override;
};

class DellKeyBoard:public KeyBoard{
    void say_hello() override;
};

void DellMouse::say_hello(){
    std::cout << "this is dell mouse" << std::endl;
}

void DellKeyBoard::say_hello(){
    std::cout << "this is dell keyboard" << std::endl;
}