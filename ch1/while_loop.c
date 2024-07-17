//
// Created by wangz on 2024/7/16.
//
#include <stdio.h>

int main() {

  int line = 0;
  printf("starting...\n");
  while (line < 200) {
    line++;
    printf("line: %d\n", line);
  }

  if (line > 200) {
    printf("offer\n");
  } else {
    printf("fighting!\n");
  }
  return 0;
}
