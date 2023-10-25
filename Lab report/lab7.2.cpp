#include<bits/stdc++.h>
using namespace std;
class box
{
   public:
   int hight,lenght,width;
   int print_volume()
   {
     cin>>hight>>lenght>>width;
     cout<<"Volume="<<hight*lenght*width;
   }
};
int main()
{
    box ob;
    ob.print_volume();
}