#include "dell_factory.hpp"
#include "hp_factory.hpp"
#include <string>
class FactoryProducer{
public:
    static std::shared_ptr<AbstactFactory> get_factory(std::string choice);
};

std::shared_ptr<AbstactFactory> FactoryProducer::get_factory(std::string choice){
    if(choice == "dell")
        return std::make_shared<DellFactory>();
    else if (choice == "hp")
        return std::make_shared<HpFactory>();
    return nullptr;
}