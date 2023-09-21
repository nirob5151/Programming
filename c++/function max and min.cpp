#include<iostream>
#include<conio.h>
using namespace std;
int number1(int a,int b,int c)
{
    if(a>b && b>c)
    {
        return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else
      return c;
}
int number2(int a,int b,int c)
{
    if(a<b && a<c)
    {
        return a;
    }
    else if (b<a && b<c)
    {
        return b;
    }
    else
      return c;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"Maximiam Number Is: "<<number1(a,b,c)<<endl;
    cout<<"Minimam Number Is :"<<number2(a,b,c);
}

