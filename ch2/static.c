//
// Created by wangz on 2024/7/18.
//
#include <stdio.h>

void test() {

  static int a = 1;
  a++;
  printf("%d\n", a);
}
int main() {
  int i = 0;
  while (i < 10) {
    test();
    i++;
  }
  return 0;
}
