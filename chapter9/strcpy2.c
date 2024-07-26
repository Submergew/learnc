//
// Created by wangz on 2024/7/26.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char a[4];
  char b[4];

  strcpy_s(b, "hello");

  printf("b: %s\n", b);
  printf("a: %s\n", a);

  return 0;
}