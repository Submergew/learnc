//
// Created by wangz on 2024/7/18.
//
#include <stdio.h>
int main() {
  int a = 7 / 2;
  int b = 7 % 2;
  printf("%d %d\n", a, b);

  printf("b=%d\n", b++); // 1
  printf("a=%d\n", ++a); // 4
  return 0;
}