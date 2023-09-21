#include<iostream>
# include<conio.h>
using namespace std;
int main()
{
    int diviend,divisor,quotient,reminder;
    cout<<"Enter Diviend Number:";
    cin>>diviend;
    cout<<"Enter Divisor Number:";
    cin>>divisor;
    quotient= diviend/divisor;
    reminder= diviend%divisor;
    cout<<"Quotient is:"<<quotient<<endl;
    cout<<"Reminder is:"<<reminder;
    getch();
}