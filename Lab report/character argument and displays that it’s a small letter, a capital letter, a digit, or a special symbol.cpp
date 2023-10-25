#include<bits/stdc++.h>
using namespace std;

char chck(char a){
    if(a>='a' && a<='z'){
        cout<<a<<" is small letter";
    }
    else if(a>='A' && a<='Z'){
        cout<<a<<" is capital letter";
    }
    else if(a>='0' && a<='9'){
        cout<<a<<" is digit";
    }
    else{
        cout<<a<<" is a special symbol";
    }
}
int main(){
    char a;
    cin>>a;
    chck(a);
    return 0;
}
