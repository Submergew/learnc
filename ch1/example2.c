//
// Created by wangz on 2024/7/16.
//
#include <stdio.h>

int main() {

  int line = 0;
  printf("加入比特，\n");
  while (line < 20000) {
    printf("写代码，%d\n", line);
    line++;
  }
  if (line >= 20000) {

    printf("好offer\n");
  } else {
    printf("继续加油\n");
  }
  return 0;
}
