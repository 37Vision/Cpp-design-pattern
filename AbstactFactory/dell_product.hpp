#include "abstract_keyboard.h"
#include "abstract_mouse.h"
#include <iostream>

class DellMouse:public Mouse {
public:
    void say_hello() override;
    virtual ~DellMouse() = default;
};

class DellKeyBoard:public KeyBoard{
public:
    void say_hello() override;
    virtual ~DellKeyBoard() = default;
};

void DellMouse::say_hello(){
    std::cout << "this is dell mouse" << std::endl;
}

void DellKeyBoard::say_hello(){
    std::cout << "this is dell keyboard" << std::endl;
}