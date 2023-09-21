#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,c;
    float f;
    char ch;
    char name[20];
    c=sizeof(a);
    cout<<c<<endl;
    c=sizeof(f);
    cout<<c<<endl;
    c=sizeof(ch);
    cout<<c<<endl;
    c=sizeof(name);
    cout<<c;
    getch();
}