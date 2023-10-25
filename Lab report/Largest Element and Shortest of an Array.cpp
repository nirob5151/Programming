/*C++ Program to Find the Largest Element and Shortest of an Array.*/
#include<iostream>
using namespace std;
int main()
{
  int n,num[100],i,largest=0,smallest; 
   cin>>n;
  for(i=0;i<n;i++)
  { 
    cin>>num[i]; 
  } 
    for(i=0;i<n;i++)
   {
      if(num[i]>largest)
    {
      largest=num[i]; 
    }
    
    }
      for(i=0;i<n;i++){
      if(num[i]<smallest) 
    {
        smallest=num[i];
     } 
    }
  cout<<"Largest Number Is: "<<largest<<endl;  
  cout<<"Smallest Number Is: "<<smallest<<endl;
return 0; 
}
