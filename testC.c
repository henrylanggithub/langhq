//
// Created by Administrator on 2024/12/26.
//
#include <stdio.h>
#include <stdint.h>

int main() {
    uint16_t num = 50000; // 定义一个 uint16_t 类型的变量

    printf("The value of num is: %u\n", num); // 使用 %u 打印无符号整数

    // 检查取值范围
    if (num > 65535) {
        printf("Value is out of range!\n");
    } else {
        printf("Value is within range.\n");
    }

    return 0;
}