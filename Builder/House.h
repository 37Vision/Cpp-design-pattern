#include <string>
#ifndef HOUSE_H
#define HOUSE_H
class House {
private:
    std::string material;
    int windows;
public:
    void set_material(const std::string& _material){
        material = _material;
    }
    void set_windows(int _windows){
        windows = _windows;
    }
    const std::string& get_material(){
        return material;
    }
    int get_windows(){
        return windows;
    }
};
#endif