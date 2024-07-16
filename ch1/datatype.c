//
// Created by wangz on 2024/7/16.
//

#include<stdio.h>

//1.sjort int a;
//2.short int INT16;
typedef short int INT16;

int data_type_1() {
  char ch;
  ch = 'a';
  printf("ch =%c\n", ch);
  return 0;
}

int data_type_2() {
  short int b = 101;
  INT16 c = 111;
  printf("b=%d\n", b);
  printf("c=%d\n", c);
  return 0;
}

int data_type_3() {
  char a = 'x';
  char b = 120;
  printf("a=%c\n", a);
  printf("b=%c\n", b);
  return 0;
}

int data_type_4() {
  printf("%x\n", -5);
  return 0;
}

//1000 0000 0000 0000 0000 0000 0000 0101  ԭ��
//1111 1111 1111 1111 1111 1111 1111 1010  ����
//1111 1111 1111 1111 1111 1111 1111 1011  ����
//FF FF FF FB
int data_type_5() {
  printf("%x\n", -5 & 10);
  printf("%x\n", -5 | 10);
  return 0;
}

//10
//0000 0000 0000 0000 0000 0000 0000 1010  ԭ��
int data_type_6() {
  printf("%d\n", (-1) >> 3);
  return 0;
}

int data_type_7() {
  int num;
  num = (5, 6);
  printf("num=%d\n", num);
  return 0;
}

int main() {
  // data_type_1();
  // data_type_2();
  // data_type_3();
  // data_type_4();
  // data_type_5();
  // data_type_6();
  data_type_7();
}
