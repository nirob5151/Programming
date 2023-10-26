/*Create a class called &quot;Shape&quot; with width and height attributes.
 Create two objects of the &quot; Shape&quot; class, one is for a rectangle and one is for a square. 
 Calculate the area and perimeter of the rectangle and square.
 (hint: square area = height*height, perimeter = 4*height)*/
 #include<iostream>
using namespace std;

class Shape{
 public:
  int height, width;
};
int main(){
  Shape rectangle,square;
  int height,width;
  cout<<"Input Rectangle Height, Width: ";
  cin>>rectangle.height>>rectangle.width;
  cout<<"area rectangle= "<<rectangle.height*rectangle.width<<endl;
  cout<<"perimeter rectangle= "<<2*(rectangle.height+rectangle.width)<<endl;
  cout<<"Input Square Height: ";
  cin>>square.height;
  cout<<"area Square= "<<square.height*square.height<<endl;
  cout<<"perimeter Square= "<<4*square.height<<endl;
  return 0;
}