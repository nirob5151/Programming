# include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,sum=0,sub,mult,rem;
    cout<<"Enter Two Number : " ;
    cin>> num1>>num2;
    sum=num1+num2 ;
    sub= num1-num2;
    mult=num1*num2;
    rem=num1%num2;
    double div =(float)num1/num2;
    cout<<"Sum is : "<<sum<<endl;
    cout<<"Subtraction is :"<<sub<<endl;
    cout<<"multiplies Is : "<<mult<<endl;
    cout<<"Devison is : "<<div<<endl;
    cout<<"Reminder is : "<<rem;

    getch ();
}