//
// Created by wangz on 2024/7/19.
//
#include <stdio.h>
int main() {
  int a = 10;
  printf("%d\n", &a);

  int *p = &a;
  *p = 20;
  printf("%d\n", p);
  printf("%d\n", *p); // 20
  printf("%d\n", a);  // 20
  return 0;
}