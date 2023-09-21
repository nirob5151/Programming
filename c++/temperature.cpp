#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double C,F,K;
    cout<<"Enter Temperature In Celsius:" ;
    cin>> C ;
    F=1.8*C+32 ;
    K=C+273 ;
    cout<<"Fahrenheit is:"<<F << endl ;
    cout<< "Kelvin is:"<<K;
    getch();

}