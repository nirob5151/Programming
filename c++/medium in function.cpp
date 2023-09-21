#include<iostream>
#include<conio.h>
using namespace std;
int number(int a,int b,int c)
{
    if(((a>b)&&(a<c))||(a>c)&&(a<b))
    {
        return a;
    }
    else if (((b>a)&&(b<c))||(b>c)&&(b<a))
    {
        return b;
    }
    else
    {
        return c;
    }
}
   
    int main()
   {
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        cout<<"Median Is : "<<number(n1,n2,n3);
   }
