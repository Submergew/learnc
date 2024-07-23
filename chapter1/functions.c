
//
// Created by wangz on 2024/7/21.
//
#include <stdio.h>

void b() { printf("b\n"); }

void a() {
  printf("a\n");
  b();
  printf("a over\n");
}
int main() {
  a();
  return 0;
}
