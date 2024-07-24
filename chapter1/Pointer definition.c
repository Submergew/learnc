//
// Created by wangz on 2024/7/24.
//
#include <stdio.h>
int main() {
  int x = 100;
  int *p1 = &x;

  char y = 'A';
  char *p2 = &y;
  printf("%p,%p\n", p1, p2);

  p1++;
  p2++;
  printf("%p,%p\n", p1, p2);
  return 0;
}