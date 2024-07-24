//
// Created by wangz on 2024/7/24.
//
#include <stdio.h>
int main() {
  int ch[] = {1, 2, 3, 4};
  printf("ch:%p\n", ch);
  printf("&ch[0]:%p\n", &ch[0]);
  printf("%d\n", ch);
  return 0;
}