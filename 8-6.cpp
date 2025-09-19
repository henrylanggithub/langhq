//
// Created by langhq on 2024/9/11.
//
#include "iostream"
using namespace std;

struct MyStruct {
    int memeber_a;
};

class Shape {
public:
    Shape(){}
    ~Shape(){}
    virtual float getArea() = 0;
    virtual float getPerim() = 0;
};

class Circle:public Shape {
public:
    Circle(float radius):itsRadius(radius){}
    ~Circle(){}
    float getArea(){ return 3.14*itsRadius*itsRadius;  }
    float getPerim(){ return 6.28*itsRadius; }
private:
    float itsRadius;
};

class Rectangle:public Shape{
public:
    Rectangle(float len, float width):itsLength(len),itsWidth(width){}
    ~Rectangle(){}
    virtual float GetLength(){ return itsLength; }
    virtual float GetWidth(){ return itsWidth; }
    virtual float getArea() { return itsLength*itsWidth; }
    float getPerim(){ return 2*itsLength + 2*itsWidth; }
private:
    float itsWidth;
    float itsLength;

};

int main(){
    Shape *sp;
    sp = new Circle(5);
    cout<<"The area of the Circle is "<< sp->getArea()<<endl;
    cout<<"The perimeter of the Circle is "<<sp->getPerim()<<endl;
    cout<<"sp 内存地址: " << &sp << endl;
    delete sp;
    sp = new Rectangle(4,6);
    cout<<sp->getArea()<<endl;
    cout<<sp->getPerim()<<endl;
    delete sp;

    MyStruct s;
    s.memeber_a = 1;
    cout<<"s.memeber_a = "<<s.memeber_a<<endl;
    MyStruct *ps;
    ps = &s;
    (*ps).memeber_a = 2;
    cout<<"ps的指针为: "<<&ps<<endl;
    cout<<"<ps->memeber_a = "<<ps->memeber_a<<endl;
    cout<<"或者 (*ps).memeber_a = "<<(*ps).memeber_a<<endl;
    MyStruct z;
    z.memeber_a = 3;
    cout<<"z.memeber_a = "<<z.memeber_a<<endl;

    MyStruct *x;
    //x->memeber_a = 3;    //会报错
    //cout<<"x.memeber_a = "<<x->memeber_a<<endl;

    return 0;
}