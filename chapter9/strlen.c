

//
// Created by wangz on 2024/7/26.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char *p = "hello";
  char ch[] = {'h', 'e', 't', '\0', 'l', 'o'};
  /**
   * sizeof("hello") == 6
   * strlen(p) == 5
   * strlen(ch) == 3
   * sizeof(ch) == 6
   * sizeof(p) == 4/8
   */

  printf("%d\n", strlen(p)); // strlen 不包含'\0'
  printf("%d\n", strlen(ch));
  return 0;
}