//
// Created by langhq on 2024/9/2.
//

#ifndef LANGHQ_CPU_H
#define LANGHQ_CPU_H
#include <iostream>

using namespace std;

enum CPU_Rank {P1=1,P2,P3,P4,P5,P6,P7};

class CPU {

private:
    CPU_Rank rank;
    int frequency;
    float voltage;

public:
    CPU_Rank getRank() const;
    void setRank(CPU_Rank rank);

    int getFrequency() const;
    void setFrequency(int frequency);

    float getVoltage() const;
    void setVoltage(float voltage);

    CPU(){
        cout<<" 默认构造了一个 CPU!"<<endl;
    }
    CPU(CPU_Rank r, int f, float v){
        rank = r;
        frequency = f;
        voltage = v;
        cout<<"构造了一个 CPU!"<<endl;
    }
    ~CPU(){
        cout<<"析构了一个 CPU!"<<endl;
    }
    void Run();
    void Stop();
    void Info();
};

#endif //LANGHQ_CPU_H
