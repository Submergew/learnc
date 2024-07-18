//
// Created by wangz on 2024/7/18.
//
#include <stdio.h>
int main() {
  int a = 10;
  int b = a++; //  b = a,a = a + 1;
  printf("%d\n", b);
  printf("%d\n", a);

  return 0;
}