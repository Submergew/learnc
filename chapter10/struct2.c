#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct author{
  char name[32];
  int age;
};

struct publish{
  char name[32];
  char addr[32];
};

struct book{
  char name[32];
  unsigned int price;
  struct author ath;
  struct publish *publish;
};

int main(){
  struct book b1;
  strcpy(b1.name, "");  // 初始化字符串
  strcpy(b1.name,"AIoT");
  b1.price = 100;

  strcpy(b1.ath.name,"lisi");
  b1.ath.age = 30;

  b1.publish = (struct publish *)malloc(sizeof(struct publish));
  strcpy(b1.publish[0].name,"renmin");
  strcpy(b1.publish[0].addr,"Beijin");
  return 0;;
}