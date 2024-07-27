
//
// Created by wangz on 2024/7/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char *tmp;
  tmp = (char *)malloc(10);
  strcpy(tmp, "hellow");

  printf("%p\n", tmp);
  tmp = realloc(tmp, 10 + 10);
  printf("%p\n", tmp);
  printf("%s\n", tmp);

  strcat(tmp, "world");
  printf("%s\n", tmp);
  return 0;
}