//
// Created by wangz on 2024/7/23.
//
#include <stdio.h>
int main() {
  int a = 10;
  int *p;
  p = &a;
  *p = 100;
  printf("p: %p,&a:%p\n", p, &a);
  printf("*p:%d\n", *p);
  printf("a:%d\n", a);
  return 0;
}