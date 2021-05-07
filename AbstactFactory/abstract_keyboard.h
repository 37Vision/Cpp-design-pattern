#ifndef KEYBOARD_H
#define KEYBOARD_H
class KeyBoard{
public:
    virtual void say_hello() = 0;
    virtual ~KeyBoard() = default;
};
#endif