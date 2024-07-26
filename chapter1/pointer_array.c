//
// Created by wangz on 2024/7/24.
//
#include <stdio.h>
int main() {
  int a[4];
  int i;
  for (i = 0; i < 4; i++)
    ;
  {
    scanf_s("%d", &a[i]);
    getchar();
  }
  for (i = 0; i < 4; i++)
    printf("%p\n", &a[i]);
  for (i = 0; i < 4; i++)
    printf("%d\n", *(a + i));

  return 0;
}