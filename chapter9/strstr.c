#include <stdio.h>
#include <string.h>
int main(){
  char *stus[] = {"zhangsan","lisi","wangwu","lisan"};
  int i;
  char *p;
  for (i = 0; i < 5; i++){

    if(p = strstr(stus[i],"san")){

      printf("%s\n",stus[i]);
      printf("%p,\n",stus[i],p);
    }
  }
  return 0;
}