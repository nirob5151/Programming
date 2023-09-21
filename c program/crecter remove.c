#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, j,n;

    printf("Enter a string: ");
    scanf("%s",&str);
    printf("Sample Output\n");
    scanf("%c",&char);
    n= Strlen(str);

    for (i = 0; j=0;i<n; i++) {
        if (str[i]=char) 
        {
           str[j]=str[i];
           j++;
        } 
        
            printf("%c", str[i]);
        
    }

    printf("\nTotal Removed Letters: %d\n", count);

    return 0;
}