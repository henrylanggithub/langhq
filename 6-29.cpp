//
// Created by langhq on 2024/9/3.
//

#include "iostream"
#include "assert.h"
using namespace std;

int main(){
    int arr[] = {1, 2, 3};
    double* p = reinterpret_cast<double *>(&arr[0]);
    *p = 5;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

    assert(true);
    int number = 65;
    int* intPtr = &number;

    // 使用reinterpret_cast将int指针转换为char指针
    char* charPtr = reinterpret_cast<char*>(intPtr);
    cout<<*charPtr<<endl;

    return 0;
    //0 1075052544 3
}