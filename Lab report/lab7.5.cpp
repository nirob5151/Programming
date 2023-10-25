#include<iostream>
using namespace std;

class Prime
{
    int n;
    public:

    void get_input()
    {
        cin >> n;
    }
    void calculate()
    {
    int i,prime = 's';

    for(i = 2; i < n; i++) {
        if((n % i) == 0) {
            prime = 'd';
        }
    }
    if (prime == 's')
        cout << n <<" "<< "is a prime number";
    else if (prime == 'd')
        cout << n <<" "<< "is not a prime number";
    }
};
int main ()
{
    
    Prime maruf;
    maruf.get_input();
    maruf.calculate();
    return 0;
}