#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    char ch;
    cin>>ch;

    if(ch>='a' && ch<='z')
    {
        cout<<"small";
    }
    else if(ch>='A'&&ch<='Z')
        {


          cout<<"capital";
    }

    else if(ch>='0'&&ch<='9')
    {
         cout<<"number";
    }
    else {
         cout<<"symbol";
    }
    getch();
}


