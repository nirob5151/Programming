#include<stdio.h>
int  main( )
{
char s1[100], s2[100], i ;
printf("\nEnter a string : ") ;
scanf("%s",s1) ;
for(i = 0; s1[i] != '\0'; ++i )
{
      s2[i] = s1[i] ;
}
s2[i] = '\0' ;
printf("\nCoppied String is : %s", s2 ) ;
return 0 ;
}