#include "shape.hpp"
#include <memory>
#include <iostream>
class Decorator : public Shape
{
protected:
    std::shared_ptr<Shape> decorated_shape;
public:
    void set_desc() override = 0;
    explicit Decorator(const std::shared_ptr<Shape>& decorated_shape){
        this->decorated_shape = decorated_shape;
    }
    ~Decorator() = default;
};

class RedDecorator : public Decorator{
private:
    void set_red(std::shared_ptr<Shape> shape){
        this->desc = decorated_shape->desc.append(",set red");
    }
public:
    void set_desc() override {
        decorated_shape->set_desc();
        set_red(decorated_shape);
    }
    explicit RedDecorator(const std::shared_ptr<Shape>& decorated_shape): Decorator(decorated_shape){}
    ~RedDecorator() = default;
};

class BlueDecorator : public Decorator{
private:
    void set_blue(std::shared_ptr<Shape> shape){
        this->desc = decorated_shape->desc.append(",set blue");
    }
public:
    void set_desc() override {
        decorated_shape->set_desc();
        set_blue(decorated_shape);
    }
    explicit BlueDecorator(const std::shared_ptr<Shape>& decorated_shape): Decorator(decorated_shape){}
    ~BlueDecorator() = default;
};