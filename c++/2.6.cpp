#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int a,b,Q,R;
    cout<<"Enter 1st enteger number:";
    cin>>a;
    cout<<"Enter 2nd enteger number:";
    cin>>b;

    Q=a/b;
    R=a%b;
    cout<<"quotient"<<"  "<<Q<<endl<<"remainder"<<"  "<<R;

    getch();
}
