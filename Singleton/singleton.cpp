#include <iostream>

class Singleton
{
private:
    Singleton() = default;
public:
    //C++11保证 static线程安全
    static Singleton& getInstance(){
        static Singleton inst;
        return inst;
    }

    void fun(){
        std::cout << "Singleton Pattern!" << std::endl;
    }
};

int main(){
    Singleton& p = Singleton::getInstance();
    p.fun();
}
