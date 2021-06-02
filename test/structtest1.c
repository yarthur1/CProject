# include <stdio.h>
# include <stdlib.h>

#define RDB_SAVE_INFO_INIT {-1,0,"000000000000000000000000000000",-1}

typedef struct clusterState {
 int a;
 int b;
 char *p;
 int c;
} clusterState;

int main (int argc, char **argv) {
  struct clusterState;
  clusterState p = RDB_SAVE_INFO_INIT;
  printf("%d, %d, %s, %d\n",p.a,p.b,p.p,p.c); 
  return 0;
}
