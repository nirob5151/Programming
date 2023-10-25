/*Write a C++ program that takes four functions that get two values and returns their sum,
 subtraction, multiplication, and division using function overloading(data type different).*/
 #include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    return (a+b);
}
float sum(double a, int b){
    return (a-b);
}
float sum(int a, double b){
    return (a*b);
}
float sum(double a, double b){
    return (a/b);
}
int main(){
    cout<<sum(5,6)<<endl;
    cout<<sum(6.56,1)<<endl;
    cout<<sum(6,1.534)<<endl;
    cout<<sum(1.5,3.6)<<endl;
    return 0;
}