#include <stdio.h>

struct student {
  char name[32];
  int age;
};
int main() {
  struct student s;
  struct student *p;
  struct student a[10];
  return 0;
}