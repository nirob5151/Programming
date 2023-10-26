/*Create a class called &quot;Rectangle&quot; with the PRIVATE variables length,width.
 Implement the constructor to initialize the length and width when an object is created.
 Implement the &quot;getArea()&quot; method to calculate the area of the rectangle.*/
 #include<bits/stdc++.h>
using namespace std;
class Rectangle{
    int length, width;
    public:
    Rectangle(int a, int b){
        length=a;
        width=b;
    }
    int getArea(int a, int b){
        return a*b;
    }
};
int main(){
    int a,b;
    cin>>a>>b;
    Rectangle obj(a,b);
    cout<<obj.getArea(a,b);
    return 0;
}
