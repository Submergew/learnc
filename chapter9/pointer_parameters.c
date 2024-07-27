//
// Created by wangz on 2024/7/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func() {
  char *tmp;
  tmp = (char *)malloc(20);

  free(tmp);
}
char *func2() {
  char *p = "zhangsan lisi wangwu zhaoliu";

  p = (char *)malloc(50); // 在堆上申请空间
  strcpy(p, "zhangsan lisi wangwu zhaoliu");
  return p; // 返回p的值 返回了p所指向的空间的首地址
}
int main() {

  char *p = func2();
  printf("%s\n", p);
  return 0;
}
