#include "decorator.hpp"
#include "concrete_shape.hpp"
#include <iostream>
#include <typeinfo>

void print(const std::shared_ptr<Shape> &p)
{
    std::cout << p->get_desc() << std::endl;
}

int main()
{
    std::shared_ptr<Shape> circle{new Circle()};
    circle->set_desc();
    print(circle);

    std::shared_ptr<Shape> red_circle = std::make_shared<RedDecorator>(std::make_shared<Circle>());
    red_circle->set_desc();
    print(red_circle);

    std::shared_ptr<Shape> red_blue_rectangle = std::make_shared<BlueDecorator>(std::make_shared<RedDecorator>((std::make_shared<Rectangle>())));
    red_blue_rectangle->set_desc();
    print(red_blue_rectangle);
}