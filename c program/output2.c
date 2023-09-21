#include<stdio.h>
main()
{
 char string[20]="Dept. of CSE, BUBT";
 int m;
 for(m=3; string[m]!='\0'; m++)
 if((m%2)==1)
 printf("%c",string[m]);
}
