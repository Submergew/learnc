#include <stdio.h>
#include <string.h>

int main(){
  char dst[20];
  memset(dst,0,sizeof(dst));
  char *src = "hello";

  strcpy(dst,"world");
  strcat(dst,src);
  printf("dst:%s\n",dst);

  char dst1[20];
  memset(dst1,0,sizeof(dst));
  char *src1 = "he\0llo";

  strcpy(dst1,"world");
  strcat(dst1,src1);
  printf("dst1:%s\n",dst1);


  return 0;
}