//
// Created by langhq on 2024/9/10.
//

#include <cstring>
#include "iostream"
#include "string"
using namespace std;

class Document {
public:
    Document(){};
    Document(char *nm);
    char *name;
    void PrintNameOf();
};
Document::Document(char *nm) {
    name = new char[strlen(nm) + 1];
    strcpy(name, nm);
}
void Document::PrintNameOf() {
    cout<<name<<endl;
}

class Book: public Document {
public:
    Book(char *nm, long pageCount);
    void PrintNameOf2();
private:
    long pageCount;
};
Book::Book(char *nm, long pageCount): Document(nm){
    this->pageCount = pageCount;
}
void Book::PrintNameOf2() {
    cout<<"Name of book :" ;
    Document::PrintNameOf();
    cout<<"pageCount = " << pageCount<<endl;
}
int main(){
    Document a("MyDocument1");
    Book b("Book1",100);
    b.PrintNameOf2();
    return 0;
}