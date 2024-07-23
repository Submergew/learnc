//
// Created by wangz on 2024/7/21.
//
#include <stdio.h>
int main() {
  int m, n;
  for (m = 0; m < 5; m++) {
    for (n = 0; n < 5; n++) {
      if (n == 3)
        continue;
      printf("%d\n", n);
    }
  }
  return 0;
}