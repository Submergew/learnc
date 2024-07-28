#include <stdio.h>
#include <string.h>

int main(){

  char *s1 = "hello";
  char *s2 = "hello";
  printf("%d\n",strcmp(s1,s2));

  char *s3 = "hello world";
  char *s4 = "hello";
  printf("%d\n",strcmp(s4,s3));

  char *s5 = "hello world";
  char *s6 = "hello";
  printf("%d\n",strcmp(s5,s6));


  return 0;
}
