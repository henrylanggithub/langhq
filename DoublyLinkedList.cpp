//
// Created by langhq on 2024/9/12.
//
#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // 插入到链表的尾部
    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // 从链表中删除节点
    void remove(Node* node) {
        if (!node) return;

        if (node == head) {
            head = node->next;
            if (head) head->prev = nullptr;
        } else {
            node->prev->next = node->next;
        }

        if (node == tail) {
            tail = node->prev;
            if (tail) tail->next = nullptr;
        } else {
            if (node->next) node->next->prev = node->prev;
        }

        delete node;
    }

    // 遍历链表
    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // 清空链表
    void clear() {
        Node* current = head;
        while (current) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
        tail = nullptr;
    }

    ~DoublyLinkedList() {
        clear();
    }
};

int main() {
    DoublyLinkedList dll;
    dll.append(10);
    dll.append(20);
    dll.append(30);

    std::cout << "链表内容: ";
    dll.display();

    return 0;
}