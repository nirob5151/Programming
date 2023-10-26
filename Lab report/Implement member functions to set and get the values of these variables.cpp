/*: Write a C++ program to create a class called Person that has private member variables for name, age, and country. 
Implement member functions to set and get the values of these variables*/
#include<iostream>
using namespace std;
class Person{
  string Name,Country;
  int Age;
public:
  void set(){
    cin>>Name>>Age>>Country;
  }
  void get(){
    cout<<Name<<" "<<Age<<"  "<<Country;
  }
};
int main(){
  Person ob;
  ob.set();
  ob.get();
return 0;
}