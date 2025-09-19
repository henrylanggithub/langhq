//
// Created by langhq on 2024/9/2.
// p62 4-20 定义一个复数类 Complex
// p63 4-21
#include "iostream"
using namespace std;

enum COLOR {WHITE,BLACK=100,RED,BLUE,GREEN=300};

class Complex {

private:
    double real;
    double image;

public:
    Complex(double r, double i):real(r),image(i) {}
    Complex(double r):real(r), image(0) {}
    void show();
    void add(Complex c2);

};

void Complex::add(Complex c2){
    real += c2.real;
    image += c2.image;
}

void Complex::show(){
    cout<<real<<" + ";
    cout<<image<<"i";
    cout<<endl;
}

int main(){
    Complex c1(1.5, 2.5);
    Complex c2=4.5;
    c1.show();
    c1.add(c2);
    c1.show();
    cout<< COLOR::BLUE <<endl;
    return 0;
}