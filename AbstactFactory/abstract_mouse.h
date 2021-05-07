#ifndef MOUSE_H
#define MOUSE_H
class Mouse{
public:
    virtual void say_hello() = 0;
    virtual ~Mouse() = default;
};
#endif