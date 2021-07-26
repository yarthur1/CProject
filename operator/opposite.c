#include <stdio.h>

int main(int argc, char** argv) {
    int t=1;
    int f=0;
    
    printf("!1=%d !0=%d !2=%d !-1=%d\n", !t,!f,!2,!-1);  // !1=0 !0=1 !2=0 !-1=0
    
    return 0;
}