#include<bits/stdc++.h>
using namespace std;
class Electricity
{
    string name;
    int unit;
    public:
    void get()
    {
        cout<<"Enter Your Name: ";
        cin>>name;
        cout<<"Enter Your Unit: ";
        cin>>unit;
    }
    void set()
    {
        if (unit<=100 && unit>0)
        {
            cout<<"Unit Price Is: "<<unit*5 ;
        }
        else if (unit<=200 && unit>100)
        {
            cout<<"Unit Price Is: "<<unit*7;
        }
        else if (unit>200)
        {
            cout<<"unite price is :"<<unit*9;
        }
    }
};
int main()
{
    Electricity ob;
    ob.get();
    ob.set();
    
}