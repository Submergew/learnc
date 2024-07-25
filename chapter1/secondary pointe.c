
//
// Created by wangz on 2024/7/25.
//
#include <stdio.h>
int main() {
  int a = 10;
  int *p = &a;
  int **p2 = &p;
  int ***p3 = &p2;
  printf("%p %p %P\n", *p2, p, &a);
  printf("%d %d %d %d\n", **p2, *p, *(&a));

  **p2 = 100;
  printf("%d %d %d %d\n", **p2, *p, *(&a), a);
  printf("***p3:%d\n", ***p3);
  return 0;
}