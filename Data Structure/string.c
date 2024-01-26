#include <stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int length;
    printf("Enter Your String: ");
    scanf("%s", s);
    length = strlen(s);
    printf("Length of string: %d\n", length);
    return 0;
}