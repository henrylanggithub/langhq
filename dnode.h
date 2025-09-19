//
// Created by langhq on 2024/9/12.
//

#ifndef LANGHQ_DNODE_H
#define LANGHQ_DNODE_H

template<class T>
class DNode {
private:
    DNode<T> *left;  //左指针
    DNode<T> *right; //右指针
public:
    T data;          //结点数据

    DNode(void);     //构造函数
    DNode(const T &item);

    void insertRight(DNode<T> *p);
    void insertLeft(DNode<T> *p);
    DNode<T> *deleteNode(void);
    //获取左侧和右侧相邻结点的地址
    DNode<T> *nextNodeRight(void) const;
    DNode<T> *nextNodeLeft(void) const;
};

//构造函数创建一个空结点，不初始化数据成员，用于链表头结点
template<class T>
DNode<T>::DNode(void) {
    //初始化结点，使之指向自身
    left=right=this;
}
//构造函数创建一个空结点并初始化数据成员
template<class T>
DNode<T>::DNode(const T &item) {
    //初始化结点，使之指向自身
    left=right=this;
    data=item;
}
//在当前结点的右侧插入一个结点p
template<class T>
void DNode<T>::insertRight(DNode<T> *p) {
    //将p与右结点连接
    p->right=right;
    right->left=p;
    //将当前结点连接到p结点左侧
    p->left=this;
    right=p;
}
//在当前结点的左侧插入一个结点p
template<class T>
void DNode<T>::insertLeft(DNode<T> *p) {
    //将p与左结点连接
    p->left=left;
    left->right=p;
    //将当前结点连接到p结点右侧
    p->right=this;
    right=p;
}
//返回指向右结点的指针
template<class T>
DNode<T> *DNode<T>::nextNodeRight() const {
    return right;
}
//返回指向左结点的指针
template<class T>
DNode<T> *DNode<T>::nextNodeLeft() const {
    return left;
}
//断开当前结点与链表的连接，并返回当前结点地址
template<class T>
DNode<T> *DNode<T>::deleteNode(void) {
    //使当前结点的左侧结点连接到当前结点的右侧结点
    left->right=right;
    //使当前结点的右侧结点连接到当前结点的左侧结点
    right->left=left;
    //返回当前结点地址
    return this;
}

#endif //LANGHQ_DNODE_H
