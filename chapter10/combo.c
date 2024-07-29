#include <stdio.h>
union un
{

  char ch[2];
  short x;
};
union un2
{

  char ch[2];
  short x;
};
int main(){
  union un un;
  printf("%d\n",sizeof(union un));
  un.x = 0x0102;
  printf("0x%x  0x%x\n",un.ch[0],un.ch[1]);

  union un2 un2;
  printf("%d\n",sizeof(union un2));
  un2.x = 0x01020104;
  printf("0x%x  0x%x\n",un2.ch[0], un2.ch[1]);
  return 0;
}