//
// Created by langhq on 2024/9/12.
// 双向链表
//
#include "iostream"
#include "dnode.h"
using namespace std;

int main(){
    DNode<int> *a = new DNode<int>();
    a->data=1;
    DNode<int> *b = new DNode<int>();
    b->data=2;
    DNode<int> *c = new DNode<int>();
    c->data=3;
    a->insertLeft(b);
    a->insertRight(c);



    cout<<"hello world2 22"<<endl;
    return  0;
}