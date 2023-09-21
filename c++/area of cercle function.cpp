#include<iostream>
#include<conio.h>
using namespace std;
float number(float a,float b=3.1416)
{
    return a*a*b;
}
int main()
{
    float n;
    cin>>n;
    cout<<"Area= "<<number(n);
    getch ();
}