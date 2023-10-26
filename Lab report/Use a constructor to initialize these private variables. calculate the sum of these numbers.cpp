/*Create a class called &quot; summation&quot; with the PRIVATE variables number1 and number2. 
Use a constructor to initialize these private variables. calculate the sum of these numbers*/
#include<bits/stdc++.h>
using namespace std;

class Summation{
    int number1, number2;
    public:
    Summation(int a, int b){
        number1=a;
        number2=b;
        cout<<number1+number2;
    }
};
int main(){
    int a,b;
    cin>>a>>b;
    Summation obj(a,b);
    return 0;
}