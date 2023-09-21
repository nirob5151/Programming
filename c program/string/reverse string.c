#include<stdio.h>
int  main( )
{
char a[10] ;
printf("\n Enter a sentence : ") ;
gets(a);
strrev(a);
printf("String after reverse:%s",a);
return 0;
}
