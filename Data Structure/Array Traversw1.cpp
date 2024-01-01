#include<iostream>
using namespace std;
int main()
{
    int LA[]={10,15,20,25,30},LB=0,UB=4;
    int K=LB;
    while (K<=UB)
    {
        std::cout<<LA[K]<<endl;
        K=K+1;
    }
    return 0;
    
}