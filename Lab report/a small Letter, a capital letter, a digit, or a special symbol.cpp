/*C++ Program to input a character and check that it is a small Letter, a capital letter, a digit, or a special symbol.*/
#include<iostream>
using namespace std;
int main()
{
  char x;
    cin>>x;
    if(x>='a'&&x<='z'){
      cout<<"Small Letter";
    }
    else if(x>='A'&&x<='Z'){
      cout<<"Capital Letter";
    }
    else if(x>=48 && x<=57){
      cout<<"Digit";
    }
    else{
      cout<<"Special Symbol";
    }
return 0;
}
