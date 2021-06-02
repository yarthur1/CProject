#include<stdio.h>

struct test1 {
    char c;
    int i;
};

struct __attribute__ ((__packed__)) test2 {
    char c;
    int i;
};

struct test3 {
    char c;
    int i;
    char buf[];
};

struct __attribute__ ((__packed__)) test4 {
    char c;
    int i;
    char buf[];
};

struct test5 {
    int i;
    char c;
};

int main()
{
    printf("size of test1:%d\n",sizeof(struct test1));
    printf("size of test2:%d\n",sizeof(struct test2));
    printf("size of test3:%d\n",sizeof(struct test3));
    printf("size of test4:%d\n",sizeof(struct test4));
    printf("size of test5:%d\n",sizeof(struct test5));
}
