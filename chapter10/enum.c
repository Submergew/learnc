#include <stdio.h>

enum Month {
  jan = 1,
  Feb,
  March,
  April,
  May,
  June,
  July,
  August,
  September,
  October,
  November,
  December
};

int mon[12] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
  printf("May 的天数: %d\n", mon[May]);
  return 0;
}