/*Description: Write a program that will print the Fibonacci series up to n value (using a user-defined function).*/
#include <bits/stdc++.h>
using namespace std;
int fibbonacci(int i)
{
   if(i == 0)
    return 0;
   else if(i == 1)
    return 1;
   else
    return (fibbonacci(i-1) + fibbonacci(i-2));
}
int main() {
   int n,i;

   cin >> n;

   for(i=0; i<n; i++) {
    cout << "\t" << fibbonacci(i);
   }
   return 0;
}