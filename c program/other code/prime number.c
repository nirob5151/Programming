#include <stdio.h>
int main()
{
    int i, num,count=0;
    printf("Enter the number");
    scanf("%d",&num);
    for(i=2; i<=num; i++)

        if(num % i ==0)
        {
            printf("Not Prime Number");
            count++;
            break;
        }
    
    else
    {
        printf("Number is Prime");
    }
    return 0;
}
