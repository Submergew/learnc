//
// Created by wangz on 2024/7/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func() {
  char *tmp;
  tmp = (char *)malloc(20);
}

int main() {
  char *tmp;
  tmp = (char *)malloc(20);
  strcpy_s(tmp, "hellow");
  printf("%s\n", tmp);
  printf("%p\n", tmp);
  free(tmp); // 释放堆上的空间,tmp依然指向原来的堆空间
  printf("%s\n", tmp); //
  printf("%p\n", tmp);
  return 0;
}