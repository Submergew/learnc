
//
// Created by wangz on 2024/7/25.
//
#include <stdio.h>
#include <stdlib.h>
int main() {
  int a = 10;
  printf("&a:%p\n", &a);
  int *p = (int *)malloc(10 * sizeof(int));
  printf("p:%p\n", p);
  printf("&p %p\n", &p);
  return 0;
}