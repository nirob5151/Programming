#include<bits/stdc++.h>
using namespace std;
class person
{
private:
    char name[100],country[100];
    int age;
public:
 void nirob()
 {
    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<"Enter Your country: ";
    cin>>country;
    cout<<"Enter Your Age: ";
    cin>>age;
    cout<<"Your Name is:"<<name<<endl;
    cout<<"Your Country is:"<<country<<endl;
    cout<<"Your AGE is:"<<age;
 
 }
};
int main()
{
    person ob;
    ob.nirob();
}

