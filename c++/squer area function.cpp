#include<iostream>
#include<conio.h>
using namespace std;
int number(int a,int b)
{
    return a*b;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<"Area= "<<number(n1,n2);
    getch ();
}