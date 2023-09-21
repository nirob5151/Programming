#include<stdio.h>
int  main( )
{
char s[100] ;
int i ;
printf("Enter a string:") ;
scanf("%s", s) ;
for(i = 1; s[i] != '0'; ++i) ;
printf("Length of string is : %d", i) ;
return (0) ;
}

