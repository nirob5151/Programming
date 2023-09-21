
#include<stdio.h>
int  main( )
{
char a[50], b[50] ;
int n ;
printf ("\n Enter a source string : ") ;
scanf("%s", a ) ;
printf("\n Enter the digit add in sting : ") ;
scanf("%d", &n ) ;
strncpy ( b, a, n ) ;
b[n] = '\0' ;
printf ("\n Copied string is = %s", b ) ;
printf ("\n Source string is = %s", a ) ;
return 0 ;
}
