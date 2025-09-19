//
// Created by langhq on 2024/9/2.
// 6-21 p82
//

#include "iostream"
using namespace std;
int count(char *str){
    int i,num=0;
    for(i=0;str[i];i++){
        if( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') )
            num++;
    }
    return num;
}

int main(){
    char text[100];
    cout<<"请输入一个英文句子"<<endl;
    cin.getline(text,100);
    cout<<"这个句子里有 "<<count(text)<<"个字母."<<endl;
}