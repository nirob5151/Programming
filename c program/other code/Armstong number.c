#include<stdio.h>
int main()
{
    int num,temp,r,sum=0;
    printf("Enter a Number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r= temp % 10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if (sum==num){
    printf("Armstong Number");
    }else {
        printf("Not Armstong Number");
    }
}
