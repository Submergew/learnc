
//
// Created by wangz on 2024/7/19.
//
#include <stdio.h>
int main() {
  int day = 0;
  scanf("%d", &day);
  switch (day) {
  case 1:
    printf("星期一\n");
  case 2:
    printf("星期二\n");
  case 3:
    printf("星期三\n");
  case 4:
    printf("星期四\n");
  case 5:
    printf("星期五\n");
  case 6:
    printf("星期六\n");
  case 7:
    printf("星期日\n");
  }
  return 0;
}