#include<bits/stdc++.h>
using namespace std;

int prime(int a){
    int i;
    for(i=2;i<=a/2;i++){
        if(a%i==0){
            cout<<a<<" is not a prime number"<<endl;
            return 0;
        }
    }
            cout<<a<<" is a prime number"<<endl;
}
int main(){
    int n;
    cin>>n;
    prime(n);
    return 0;
}
