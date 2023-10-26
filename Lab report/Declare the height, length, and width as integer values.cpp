/*Create a class called Box that contains one public function (print_volume) and three public variables (height length and width).
 Declare the height, length, and width as integer values.
  Use the public function print_volume () to calculate the volume of a box and display the volume.*/
#include<iostream>
using namespace std;
class Box{
  public:
    int height,length,width;
    void print_volume(){
        cin>>height>>length>>width;
        cout<<height*length*width;
    }
};
int main(){
  Box ob1;
  ob1.print_volume();
return 0;
}
