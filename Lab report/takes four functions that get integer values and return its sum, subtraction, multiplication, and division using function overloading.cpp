/*Write a C++ program that takes four functions that get integer values and return its sum, 
subtraction, multiplication, and division using function overloading (number of arguments different).*/
#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b, int c, int d, int e){
    return (a+b+c+d+e);
}
int sum(int a, int b, int c, int d){
    return (a-b-c-d);
}
int sum(int a, int b, int c){
    return (a*b*c);
}
int sum(int a, int b){
    return (a/b);
}
int main(){
    cout<<sum(5,2,7,8,9)<<endl;
    cout<<sum(10,3,2,1)<<endl;
    cout<<sum(6,3,2)<<endl;
    cout<<sum(6,3)<<endl;
    return 0;
}

