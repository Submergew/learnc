#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAMELEN 32
struct student
{
  char name[NAMELEN];
  int age;
  char gender;
};
int main(){
  struct student *s = NULL;
  s = (struct student *)malloc(3*sizeof(struct student));
  int i;
  for(i = 0;i < 3; i++)
  {
    printf("name:\n");
    memset(s[i].name,0,sizeof(s[i].name));

    scanf("%s",s[0].name);//(s+0)->name  (*(s+0)).name
    getchar();

    printf("age:\n");
    scanf("%d", &((s+i)->age));
    getchar();

    printf("gender:\n");
    scanf("%c",&((*(s+i)).gender));

  }

  for(i = 0;i < 3;i++){

    printf("%s %d %c\n",s[i].name,s[i].age,s[i].gender);
  }
  return 0;
}