//
// Created by wangz on 2024/7/18.
//
#include <stdio.h>
int main() {
  int a = 0; // 初始化
  a = 20;    // 赋值
  a = a + 3;
  a += 3; // a = a+3
  a = a - 3;
  a -= a - 3; // a = a-3
  printf("%d\n", a);

  return 0;
}