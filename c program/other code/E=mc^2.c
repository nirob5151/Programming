#include<stdio.h>
int main()
{
    int m,E,c=300;
    printf("Enter the mass[kg]:");
    scanf("%d",&m);
    E=(float)m*c*c;
    printf("The Energy is:%lf joles",E);

    return 0;

}