#include<bits/stdc++.h>
using namespace std;
class Triangle
{
   private:
   double hight,base;
   public:
   Triangle(double x,double y)
   {
    hight =x;
    base=y;
   }
   void display()
   {
      cout<<"Traingle Hight and Base: \n";
      cout<<"Hight: "<<hight<<endl;
      cout<<"Base: "<<base<<endl;
    
   }
   void area()
   {
      cout<<"The area of Traiangle: "<<0.5*hight*base;
   }
};
int main()
{
   double num1, num2;
   cin>>num1>>num2;
   Triangle send(num1,num2);
   send.display();
   send.area();
   return 0;
}