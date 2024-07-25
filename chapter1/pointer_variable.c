
//
// Created by wangz on 2024/7/24.
//
#include <stdio.h>

#if 0
void int () {
    printf("\n");
}
#endif

int main() {

  char ch = 'A';
  char *p;
  p = &ch;
  printf("*p:%c\n", *p);

  int x = 10;
  int *p2 = &x;

  printf("%d %d\n", sizeof(p), sizeof(p2));

  return 0;
}
