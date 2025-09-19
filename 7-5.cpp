//
// Created by langhq on 2024/9/6.
// p98
//

#include "iostream"
using namespace std;
enum myColor{
    BLACK,WHITE,GREEN
};

class Mammal {
public:
    Mammal();
    ~Mammal();

protected:
    int itsAge;
    int itsWeight;

public:
    int getItsAge() const {
        return itsAge;
    }

    void setItsAge(int age) {
        itsAge = age;
    }

    int getItsWeight() const {
        return itsWeight;
    }

    void setItsWeight(int weight) {
        itsWeight = weight;
    }

    void speak() const {
        cout<<"Mammal sound !\n";
    }
};

class Dog: public Mammal {
public:
    Dog();
    ~Dog();
    myColor getColor() const {
        return itsColor;
    }
    void setColor(myColor color){
        itsColor = color;
    }
    void wagTail(){
        cout<<"Tail wagging...\n";
    }

private:
    myColor itsColor;

};

Mammal::Mammal():
    itsAge(1),itsWeight(5) {
    cout<<"Mammal constructor...\n";
}
Mammal::~Mammal() {
    cout<<"Mammal destructor...\n";
}
Dog::Dog() {
    cout<<"Dog constructor...\n";
}
Dog::~Dog() {
    cout<<"Dog destructor...\n";
}

int main(){
    Dog jack;
    //jack.setColor(BLACK);
    /*jack.speak();
    jack.wagTail();
    cout<<"jack is "<<jack.getItsAge()<<" years old, Color "<<jack.getColor()<< endl;*/
    int a=1,b=2,c=3;
    int d=a|b-c;
    int e=a^b&-c;
    cout<<" d = "<< d << endl;
    cout<<" e = "<< e << endl;

    return 0;

}

