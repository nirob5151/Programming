#include<stdio.h >
int  main( )
{
char ch[150] ;
int i, j ;
printf("\n Enter a string: ") ;
gets(ch) ;
for(i = 0; ch[i] != '\0'; i++)
{
      while (!( (ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z') || ch[i] == '\0') )
      {
            for(j = i; ch[j] != '\0'; j++)
            {
                  ch[j] = ch[j+1] ;
            }
            ch[j] = '\0' ;
      }
}
printf("\n Output String: ") ;
puts(ch) ;
return 0 ;
}
