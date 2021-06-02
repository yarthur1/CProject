#include <stdio.h>
struct str{
    int len;
    char s[0]; //可变数组
};

struct foo {
    struct str *a;
};

//https://coolshell.cn/articles/11377.html
int main(int argc, char** argv) {
    printf("%d\n", sizeof(struct foo));
    printf("%d\n", sizeof(struct str));

    struct foo f={0};
    if (f.a->s) {
        //printf( f.a->s);
        printf("%x\n", f.a->s);
        printf("%p\n", f.a->s);
    }
    return 0;
}