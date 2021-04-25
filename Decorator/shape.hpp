#ifndef SHAPE_H
#define SHAPE_H
#include <string>
class Shape
{
public:
    std::string desc = "";
    virtual ~Shape() = default;
    virtual std::string get_desc(){return desc;}
    virtual void set_desc() = 0;
};
#endif