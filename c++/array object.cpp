#include <bits/stdc++.h>
using namespace std;
class Student{
 private:
 int id;
 public:
 string name;
 void Get_in(){
    cout<<"Enter name & Id:";
    cin>>name>>id;
 }
 friend void show(Student out);
};
void show(Student out){
    cout<<"Name= "<<out.name<<" Id="<<out.id<<endl;
}

int main(){
    Student ob[3];
    for (int i = 0; i < 3; i++)
    {
        ob[i].Get_in();
    }
     for (int i = 0; i < 3; i++)
    {
        show(ob[i]);
    }
    return 0;
}