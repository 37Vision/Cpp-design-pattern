#include "decorator.hpp"
#include "concrete_shape.hpp"
#include <iostream>
#include <typeinfo>

void print(const std::shared_ptr<Shape> &p)
{
    std::cout << p->get_desc() << std::endl;
}

//动态(组合)地给一个对象增加一些额外的职责。就增加功能而言，Decorator模式比生成子类(继承)更为灵活(消除重复代码 & 减少子类个数)
int main()
{
    std::shared_ptr<Shape> circle = std::make_shared<Circle>();
    circle->set_desc();
    print(circle);

    std::shared_ptr<Shape> red_circle = std::make_shared<RedDecorator>(std::make_shared<Circle>());
    red_circle->set_desc();
    print(red_circle);

    std::shared_ptr<Shape> red_blue_rectangle = std::make_shared<BlueDecorator>(std::make_shared<RedDecorator>((std::make_shared<Rectangle>())));
    red_blue_rectangle->set_desc();
    print(red_blue_rectangle);
}