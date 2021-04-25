#include "shape.hpp"

class Circle : public Shape
{
public:
    void set_desc() override {
        this->desc.append("this is a circle");
    }
    ~Circle() = default;
};

class Rectangle : public Shape
{
public:
    void set_desc() override {
        this->desc.append("this is a rectangle");
    }
    ~Rectangle() = default;
};
