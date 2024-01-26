#include <stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int pos,length,i=0;
    printf("Enter a String: ");
    gets(s1);
    printf("Enter Your Position: ");
    scanf("%d",&pos);
    length=strlen(s1);
    while (i<length)
    {
        s2[i]=s1[i+pos-1];
        i++;
    }
    printf("Resulting Strings: ");
    puts(s2);
    return 0;
    

}