
//
// Created by wangz on 2024/7/19.
//
#include <stdio.h>
int main() {
  int day = 0;
  scanf_s("%d", &day);
  switch (day) {
  case 1:
    printf("Monday\n");
  case 2:
    printf("Tuesday\n");
  case 3:
    printf("Wednesday\n");
  case 4:
    printf("Thursday\n");
  case 5:
    printf("Friday\n");
  case 6:
    printf("Saturday\n");
  case 7:
    printf("Sunday\n");
  }
  return 0;
}