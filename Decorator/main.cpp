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

    std::shared_ptr<Shape> red_circle = std::shared_ptr<RedDecorator>(
        new RedDecorator(std::shared_ptr<Circle>(
            new Circle)));
    red_circle->set_desc();
    print(red_circle);

    std::shared_ptr<Shape> red_blue_rectangle = std::shared_ptr<BlueDecorator>(
        new BlueDecorator(std::shared_ptr<RedDecorator>(
            new RedDecorator(std::shared_ptr<Rectangle>(
                new Rectangle)))));
    red_blue_rectangle->set_desc();
    print(red_blue_rectangle);
}