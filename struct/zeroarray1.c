#include <stdio.h>

//结构体成员的地址就是结构体地址加偏移
//https://coolshell.cn/articles/11377.html
struct test{
    int i;
    short c;
    char *p;
    char s[10];
};

//https://coolshell.cn/articles/11377.html
//访问成员数组名其实得到的是数组的相对地址  数组名其实是地址
//访问成员指针其实是相对地址里的内容

//https://www.cnblogs.com/hello--the-world/archive/2012/05/31/2528326.html
//segmentation fault
//段错误应该就是访问了不可访问的内存，这个内存区要么是不存在的，要么是受到系统保护的。

int main(){

    int data = 29;
    int *ptr = &data;
    printf("%p\n", data); //只是将变量表示成地址形式，转成十六进制
    printf("%x\n", data); //%x, %X 无符号以十六进制表示的整数
    printf("%p\n", &data);//指针的值(变量的地址)
    printf("%x\n", &data);//
    printf("%d\n", &data);//
    printf("%lld\n", &data);//把地址转换成long long
    printf("%x\n", ptr);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);//指针变量本身的地址

    struct test *pt=NULL;
    printf("pt = %x\n", pt);
    printf("&pt = %p\n", pt);
    
    printf("&s = %x\n", pt->s); //等价于 printf("%x\n", &(pt->s) );
    printf("&s = %p\n", pt->s); 

    printf("&i = %x\n", &pt->i); //因为操作符优先级，我没有写成&(pt->i)
    printf("&c = %x\n", &pt->c);
    printf("&p = %x\n", &pt->p); //指针变量本身的地址

    printf("&p = %p\n", pt->p);  //指针变量本身的地址不可访问
    printf("&p = %x\n", pt->p);
    return 0;
}