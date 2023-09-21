#include <bits/stdc++.h>
using namespace std;
class IntakeGPA{
private:
string name;
double cgpa;
public:
IntakeGPA(string nam, double x){
name=nam;
cgpa=x;
}
friend void compare(IntakeGPA ob1, IntakeGPA ob2);
};
void compare(IntakeGPA ob1, IntakeGPA ob2){
    if(ob1.cgpa>ob2.cgpa){
        cout<<ob1.name<<"'s CGPA is high";
    }
    else{
    cout<<ob2.name<<"'s CGPA is high";
    }
}
int main(){
    string a,b;
    double c,d;
    cout<<"Enter your name and cgpa: ";
    cin>>a>>c>>b>>d;
    IntakeGPA student1(a,c);
    IntakeGPA student2(b,d);
    compare(student1,student2);
return 0;
}