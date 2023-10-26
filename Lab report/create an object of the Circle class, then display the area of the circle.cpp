/*: Create a class called “Circle” that calculates and displays the area of a circle. 
The radius is a private data member of the class, and the compute_area () function is responsible for computing
 and displaying the area based on the given radius. 
In the main function, create an object of the Circle class, then display the area of the circle.*/
#include<bits/stdc++.h>
using namespace std;

class Circle{
    int radius;
    public:
    float area(int a){
        radius=a;
        float A= 3.141*radius*radius;
        return A;
    }
};
int main(){
    Circle obj;
    int a;
    cin>>a;
    cout<<obj.area(a);
    return 0;
}