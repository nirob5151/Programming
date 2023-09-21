 #include<stdio.h>
int main()
{
    int num,result;
    printf("Factorial number= ");
    scanf("%d",&num);
    result= fact(num);
    printf("factorial(%d!):%d",num,result);


}
    int fact(int n)
    {
    if(n==1)
    return 1;

    else
    return n*fact(n-1);

}