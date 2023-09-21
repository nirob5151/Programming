#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int year;
    cin>>year;

    if(year%4==0)
    {
        cout<<"leap year";
    }
    else{
          cout<<"not leap year";
    }


    getch();
}

