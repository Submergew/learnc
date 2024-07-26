//
// Created by wangz on 2024/7/26.
//
#include <stdio.h>
#include <string.h>
int main() {

  char *p = "hello";
  int i;
  for (i = 0; i < 6; i++)
    printf("%d ", p[i]); //*(p+i)
  printf("\n");
  printf("%d\n", sizeof("hello"));

  char name[30] = {0};
  memset(name, 0, sizeof(name));
  name[0] = '2';
  name[1] = 'a';
  name[2] = 'x';
  // zax
  name[0] = 'w';
  name[1] = 'q';
  name[2] = '\0';
  printf("%s\n", name);
  return 0;
}