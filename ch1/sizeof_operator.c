//
// Created by wangz on 2024/7/18.
//
#include <stdio.h>
#include <string.h>
int main() {
  int arr[10] = {0};
  printf("%d\n", sizeof(arr));
  printf("%d\n", sizeof(arr[0]));
  printf("%d\n", sizeof(arr) / sizeof(arr[0])); // 数组的元素个数

  // sizeof() 和 strlen()区别
  char s[] = "Hello, world!";
  printf("%d\n", sizeof(s));
  printf("%d\n", strlen(s));
  return 0;
}