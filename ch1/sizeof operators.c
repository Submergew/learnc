//
// Created by wangz on 2024/7/18.
//
#include <stdio.h>
int main() {
  int arr[10] = {0};
  printf("%d\n", sizeof(arr));
  printf("%d\n", sizeof(arr[0]));
  printf("%d\n", sizeof(arr) / sizeof(arr[0])); // 数组的元素个数
  return 0;
}