#include<iostream>
#include<conio.h>
using namespace std;
int number(int a,int b)
{
    return a+b ;

}
int number2(int a,int b)
{
    return a-b ;

}
int number3(int a,int b)
{
    return a*b ;

}
float number4(float a,float b)
{
    return a/b ;

}
int main()
{
    int n1,n2,sum,sub,mult;
    float div;
    cin>>n1>>n2;
    sum=number(n1,n2);
    sub=number2(n1,n2);
    mult=number3(n1,n2);
    div=number4(n1,n2);
    
    cout<<sum<<endl;
    cout<<sub<<endl;
    cout<<mult<<endl;
    cout<<div;
    getch();
    
}