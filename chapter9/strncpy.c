
#include <stdio.h>
#include <string.h>

int main(){
  char *src = "hello";
  char dst[10];
  memset(dst, 'A', 10);
  printf("dst:%s\n",dst);

  strncpy(dst, src, 3);
  printf("dst:%s\n",dst);

  strncpy(dst, src, 8);
  printf("dst:%s\n",dst);

  char *scr1 = "hello";
  memset(dst, 'A',10);
  strncpy(dst,src,8);
  printf("dst:%s\n",dst);

  int i;
  for(i = 0; i < 10; i++){
    printf("%c", dst[i]);
  }
  printf("\n");


  return 0;
}
