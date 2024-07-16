#include<stdio.h>

//1.sjort int a;
//2.short int INT16;
typedef short int INT16;

int main() {
  short int b = 101;
  INT16 c = 111;
  printf("b=%d\n", b);
  printf("c=%d\n", c);

  return 0;
}
