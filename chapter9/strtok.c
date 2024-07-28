
#include <stdio.h>
#include <string.h>

int main(){
  char data[] = {"##name=zhangsan;age=18;score=99.5##"};
  char*p;
  int n = 0;
  int len;
  p = strtok(data,":");
  printf("%s\n",p);
  len = strlen(p);
  n = 0;
  while(*p != '=' && n <= len){
    p++;
    n++;
  }
  if (n <= len) {
    p++;
    char name[10];
    memset(name, 0, 10);
    strcpy(name, p);
    printf("name:%s\n", name);
  }

  return 0;
}