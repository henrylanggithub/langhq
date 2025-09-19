//
// Created by langhq on 2024/9/13.
//
#include "iostream"
using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero condition!";
    }
    return (a / b);
}

int main(){
    char* buf;
    try {
        buf=new char [512];
        if(buf==0)
            throw "内存分配失败";
    } catch (char *str) {
        cout<<"有异常产生: "<<str<<endl;
    }
    //finally{} c++没有finally
    int a=50;
    int b=0;
    double c;
    try {
        c=division(a,b);
        cout<<"c = "<< c<<endl;
    } catch (const char* msg ){
        cerr << msg << endl;
    }




    return 0;
}
