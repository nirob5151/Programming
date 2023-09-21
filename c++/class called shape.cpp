#include<bits/stdc++.h>
using namespace std;
class Shape
{
    public:
    int width,height;
    void square()
    {
        cout<<"Enter Width & Height : ";
        cin>>width>>height;
        cout<<"Wedth Is:"<<width<<endl;
        cout<<"Height Is:"<<height<<endl;
        cout<<"Area Of Square: "<<height*height<<endl;
        cout<<"Perimeter of Square: "<<4*height<<endl;
    }
    void rectangle()
    {
        cout<<"Area Of ectangle: "<<height*width<<endl;
        cout<<"Perimeter Of ectangle: "<<2*height+2*width;
    }
};
int main()
{
    Shape ob;
    ob.square();
    ob.rectangle();
}