//
// Created by wangz on 2024/7/26.
//
#include <stdio.h>
int main() {

  char *p = "hello";
  int i;
  for (i = 0; i < 6; i++)
    printf("%d ", p[i]); //*(p+i)
  printf("\n");
  printf("%d\n", sizeof("hello"));

  return 0;
}