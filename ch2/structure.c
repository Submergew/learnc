//
// Created by wangz on 2024/7/19.
//
#include <stdio.h>
struct Stu {
  char name[20];
  int age;
  char sex[10];
  char tele[12];
};
int main() {

  struct Stu s = {"zhangsn", 20, "male0", "15596668862"};
  printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);

  return 0;
}