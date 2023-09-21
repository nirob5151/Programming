# include<bits/stdc++.h>
using namespace std;
int number(int n)
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
int main()
{
    int num;
    cout<<"Enter a number";
    cin>>num;
    cout<<number(num);
    return 0;
}