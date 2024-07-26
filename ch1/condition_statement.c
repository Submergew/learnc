//
// Created by wangz on 2024/7/17.
//
#include <stdio.h>

int main() {
  char x;
  int y = 0;

  scanf_s("%s", &x);
  if (x < 0) {
    y = 1;
  } else if (x == 0) {
    y = 0;
  } else {
    y = -1;
  }

  printf("%d\n", y);
  return 0;
}