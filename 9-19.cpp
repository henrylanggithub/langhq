//
// Created by langhq on 2024/9/5.
// p144
//

#include "iostream"
using namespace std;

template<class T>
int binarySearch(T list[], int n, T key){
    int mid, low, high;
    T midvalue;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        midvalue=list[mid];
        if(key==midvalue)
            return mid;
        else if (key<midvalue)
            high=mid-1;
        else {
            low=mid+1;
        }
    }
    return -1;
}

int main(){
    int i, n;
    int data[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"输入要查找的数据";
    cin>>n;
    cout<<"数据为:"<<endl;
    i = binarySearch(data,10,n);
    cout<<"数据位置:"<< i<<endl;

}