#include<iostream>
using namespace std;
int main()
{
    int x[4];
    for(int i=0;i<4;i++)
    {
      std::cin>>x[i];
    }
    int max=x[0];
    for(int i=0;i<4;i++)
    {
        if(max < x[i])
        {
            max=x[i];
        }
    }
    int a,b,c;
    if(max==x[0])
    {
        a=max-x[1];
        b=max-x[2];
        c=max-x[3];
    }

    else if(max==x[1])
    {
        a=max-x[0];
        b=max-x[2];
        c=max-x[3];
    }

    else if(max==x[2])
    {
        a=max-x[1];
        b=max-x[0];
        c=max-x[3];
    }

    else
    {
        a=max-x[1];
        b=max-x[2];
        c=max-x[0];
    }

    std::cout<<a<<" "<<b<<" "<<c;


    return 0;

}