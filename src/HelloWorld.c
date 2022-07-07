#include <stdio.h>

void main()
{
  char s[100];
  printf("Type Input:\n");
  scanf("%[^\n]%*c", &s);
  // %[^\n] means accept everything till \n in the input (i.e Life is beautiful\n). %*c drops the last character i.e \n
  printf("Hello World!\n%s",s);
}