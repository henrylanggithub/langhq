//
// Created by langhq on 2024/9/2.
//

#include "CPU.h"

void CPU::Run() {
    cout<<"CPU 开始运行!"<<endl;
}

void CPU::Stop() {
    cout<<"CPU 停止运行!"<<endl;
}

void CPU::Info() {
    cout<<"CPU info :" + CPU::getFrequency() << endl;
}

int CPU::getFrequency() const {
    return frequency;
}

void CPU::setFrequency(int frequency) {
    CPU::frequency = frequency;
}

float CPU::getVoltage() const {
    return voltage;
}

void CPU::setVoltage(float voltage) {
    CPU::voltage = voltage;
}

CPU_Rank CPU::getRank() const {
    return rank;
}

void CPU::setRank(CPU_Rank rank) {
    CPU::rank = rank;
}

