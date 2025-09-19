#include <iostream>
using namespace std;
#include "CPU.h"

class Mammal {
public:
    //结构体与析构体
    Mammal(){
        cout<<"默认构造体 Mammal \n" << endl;
    };
    ~Mammal(){
        cout<<"析构了一个 Mammal \n" << endl;
    };
    void speak() const {
        cout<<"Mammal sound!\n";
    }

private:
    int age;
    int weight;

private:
    int getAge() const {
        return age;
    }
    int getWeight() const {
        return weight;
    }
    void setAge(int _age) {
        age = _age;
    }
    void setWeight(int _weigth){
        weight = _weigth;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Mammal man;
    man.speak();
    CPU c;
    c.Run();
    c.setFrequency(1000);
    c.Info();
    c.Stop();
    return 0;
}