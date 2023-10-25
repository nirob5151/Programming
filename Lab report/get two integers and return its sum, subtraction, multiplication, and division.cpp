#include<iostream>
using namespace std;

float sum(float a,float b)
{
    return(a+b);
}
float sub(float a,float b)
{
    return(a-b);
}
float multi(float a,float b)
{
    return(a*b);
}
float div(float a,float b)
{
    return(a/b);
}
int main()
{
    float a,b,sum1,sub1,multi1,div1;
    cin>>a>>b;
    sum1=sum(a,b);
    sub1=sub(a,b);
    multi1=multi(a,b);
    div1=div(a,b);
    cout<<"sum: "<<sum1<<endl;
    cout<<"sub: "<<sub1<<endl;
    cout<<"multi: "<<multi1<<endl;
    cout<<"div: "<<div1<<endl;
    return 0;
}