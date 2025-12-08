//
// Created by langhq on 2025/12/5.
//  f6 f5 f7 f10
#include <iostream>
using namespace std;

void funC() {
    std::cout << "funC调用" << std::endl;
}

void funB() {
    std::cout << "funB调用" << std::endl;
    funC();  // funB 调用 funC
}

void funA() {
    std::cout << "funA调用" << std::endl;
    funB();  // funA 调用 funB
}

class Person {
public:
    std::string name;
    int height;   // 单位：厘米（cm）
    int age;      // 单位：岁

    // 构造函数（可选，方便初始化）
    Person(const std::string& n, int h, int a)
            : name(n), height(h), age(a) {}

    // 打印信息的成员函数（可选）
    void printInfo() const {
        std::cout << "姓名: " << name
                  << ", 身高: " << height << "cm"
                  << ", 年龄: " << age << "岁" << std::endl;
    }
};

int main(){
    int number = 99999;
    // 先调用函数
    funA();
    int p1 = 1;
    int p2 = 2;
    int p3 = 3;
    std::cout << "1-1.cpp Hello, World! " << number  << std::endl;

    // 实例化一个 Person 对象：小李，168cm，30岁
    Person xiaoli("小李", 168, 30);

    // 输出信息
    xiaoli.printInfo();

}