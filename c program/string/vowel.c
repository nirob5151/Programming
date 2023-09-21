#include <stdio.h>
int main()
{
 char str[50];
 printf("enter a string:");
 gets(str);
 int len=strlen(str);
 int i,vowel=0;
 int con=0;
 int num=0;
 int spc=0;
 for(i=0;i<len;i++)
 {
 
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'|
|str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
 {
 vowel++;
 }
 else 
if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'|
|str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
 {
 num++;
 }
 else if(str[i]==' ')
 {
 spc++;
 }
 else
 {
 con++;
 }
 }
 printf("%d is the number of vowels\n%d is the number of 
consonant\n%d is the number of space\n%d is the number of 
numbers\nit has a total of %d characters",vowel,con,spc,num,len);
}
