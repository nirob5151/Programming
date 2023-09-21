#include<bits/stdc++.h>
using namespace std;
class Boxwhich
{
    double lenth,width,hight;
    public:
    Boxwhich()
    {
        lenth=0;
        width=0;
        hight=0;
    }
    Boxwhich(double x,double y,double z)
    {
        lenth=x;
        width=y;
        hight=z;
    }
    double getarea()
    {
            return lenth*width*hight;
    }
};
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    Boxwhich send1;
    Boxwhich send2(a,b,c);
    cout<<"Box Area: "<<send1.getarea()<<endl;
    cout<<"Box Area: "<<send2.getarea()<<endl;
}