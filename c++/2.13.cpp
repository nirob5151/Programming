#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int a,square,cube;
    cin>>a;
    if(a%2==0)
    {
        square=a*a;
        cout<<"square"<<square;
    }

    else
    {
        cube=a*a*a;
         cout<<"cube"<<cube;
    }


    getch();
}

