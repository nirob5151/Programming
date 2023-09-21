#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int a,i;


    for(i=0;i<3;i++)
    {
         cin>>a;
    }
    if(a>=60)
    {
      cout<<"First";
    }

    else if(a>=50&&a<=59)
    {
      cout<<  "second";
    }
    else if(a>=40&&a<=49)
    {
        cout<<  "third";
    }
    else{
        cout<<  "fail";
    }


    getch();
}
