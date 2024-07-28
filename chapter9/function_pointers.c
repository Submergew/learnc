#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef int (*FUNC)(int, int);

int max(int x ,int y)
{
  return x>y?x:y;
}

int add(int x,int y)
{
  return x+y;
}

typedef void (*SKILL)();
void skill1()
{
  printf("skill1\n");
}

void skill2()
{
  printf("skill2\n");
}
void skill3()
{
  printf("skill3\n");
}
void skill4()
{
  printf("skill4\n");
}

int main(){
  FUNC f;
  f = max;
  printf("%d\n",f(10,20));

  f = add;
  printf("%d\n",f(10,20));

  SKILL s[4]={skill1,skill2,skill3,skill4};

  srand(time(NULL));
  int n = rand()%4; //rand函数能够产生一个随机数
  s[n]();
  return 0;

}