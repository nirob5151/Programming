#include<stdio.h>
int  main( )
{
char str1[50], str2[50] ;
int n ;
printf ("\n Enter a string : ") ;
scanf("%s", str1 ) ;
printf("\n Enter the string for Add : ") ;
scanf("%s", str2 ) ;
printf("\n Enter the digit add in sting : ") ;
scanf("%d", &n ) ;

strncat(str1, str2, n ) ;
printf("\n String after concatenation: %s\n", str1 ) ;
return 0 ;
}
