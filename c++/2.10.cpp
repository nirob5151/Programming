#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
   int x,y,z;
   cin>>x>>y>>z;
   if(x>y&&x>z)
   {
       cout<<"largest X"<<x;
   }
   else if(y>x&&y>z)
   {
     cout<<"largest Y"<<y;
   }
   else{
     cout<<"largest Z"<<z;
   }


    getch();
}

