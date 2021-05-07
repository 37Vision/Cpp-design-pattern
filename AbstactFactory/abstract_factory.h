#include "abstract_keyboard.h"
#include "abstract_mouse.h"
#include <memory>

#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H
class AbstactFactory {
public:
    virtual std::shared_ptr<Mouse> create_mouse() = 0;
    virtual std::shared_ptr<KeyBoard> create_keyboard() = 0;
};
#endif