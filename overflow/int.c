#include <stdio.h>
// https://zhuanlan.zhihu.com/p/28563004
/*
* 无符号溢出是取模求余，有符号实现依赖编译器，向上溢出变为负数，向下溢出变为正数*/
int main(int argc, char** argv) {
    signed char x;
    x = 125 + 5;

    
    printf("x=%d \n",x);
    
    return 0;
}