
//
// Created by wangz on 2024/7/17.
//
#include <stdio.h>
int Max(int x, int y) {
  if (x > y)
    return x;
  else
    return y;
}

int main() {
  int a = 0;
  int b = 0;
  scanf("%d%d", &a, &b);
  int r = Max(a, b);
  printf("%d\n", r);
  return 0;
}