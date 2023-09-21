#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,year,y1,y2,n1,n2;
    cin>>year;
    if (((year%4==0) && (year%100!=0))||(year%400==0))
    {
        cout<<"Leap Year";
    }
    else
    {
    for ( i = 0; i <=4; i++)
    {
       n1=year+i;
       n2=year-i;
       if(((n1%4==0)&&(n1%100!=0))||(n1%400==0))
       {
        y1 =n1;
        continue;
       }
       else if (((n2%4==0)&&(n2%100!=0))||(n2%400==0))
       {
        y2=n2;
        continue;
       }
       else
       {

       }
       
    }
    if ((y1-year)>=(y2))
       cout<<"Nearest Leep Year Is "<<y2;
       else
        cout<<"Nearest Leep Year Is "<<y1;
    }
}