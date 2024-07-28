#include <stdio.h>

struct student {
  char name[32];
  int age;
  char gender;
  float score;
};
int main() {
  struct student s = {"zhangsan",18,'m',99.5};
  struct student s2 = {.age=18, .name="zhangsan", .score=99.5, .gender='m'};
  struct student *p;
  struct student a[10];
  return 0;
}