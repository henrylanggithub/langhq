//
// Created by langhq on 2024/9/2.
// p58 4-13
//
#include "iostream"
using namespace std;

class Circle {
public:
    Circle(float radius){
        this->radius=radius;
    }
    ~Circle(){};
    float getArea(){
        return 3.14*radius*radius;
    }
private:
    float radius;
};

int main(){
    float radius;
    cout<<"请输入圆的半径 ：";
    cin>>radius;
    Circle p(radius);
    cout<<"半径为"<<radius<<"的圆，他的面积为:"<<p.getArea()<<endl;
}