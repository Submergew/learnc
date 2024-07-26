//
// Created by wangz on 2024/7/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void GetMemory(char **p) { *p = (char *)malloc(100); }

void Test(void) {
  char *str = NULL;
  GetMemory(&str); // 传递 str 的地址
  if (str == NULL) {
    printf("Memory allocation failed.\n");
    return;
  }
  strcpy(str, "hello world"); // 现在 str 指向有效的内存
  printf("%s\n", str);

  free(str); // 释放分配的内存
}

int main() {
  Test();
  return 0;
}