# include<stdio.h>
int main()
{
    int number,hours;
    float amount,Salary;
    scanf("%d %d %f",&number,&hours,&amount);
    Salary =  amount * hours;
    printf("Number= %d\n",number);
    printf("Salary= U$ %0.2f\n",Salary);
    return 0;
}