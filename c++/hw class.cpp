#include <iostream>
using namespace std;

class Rectangle {
  private:
    int length;
  // copy constructor with a Rectangle object as parameter copies data of the obj parameter
  public:
    
    Rectangle ()
    {
        int x;
        cin >> x;
        length=x;
    }
    

    Rectangle (Rectangle & obs) //Need to use a constructor beforehand for this to work
    {
                                       //length=4;
      length = obs.length;  // try dis shit, length = obs.getarea();
    }
    
    void show()
    {
        cout << "The length is: " << length <<" "<<endl;
    }
    
    int getarea()
    {
        return length*length;
    }
};
 
int main() {
    
Rectangle ob1,ob2,ob3; //Rectangle ob1(10),ob2(20),ob3(40);

 ob1.show();
 ob2.show();
 ob3.show();
 Rectangle obx = ob2;   //copy the content using object

  cout << "Area of Rectangle 1: " << ob1.getarea() << endl;
  cout << "Area of Rectangle 2: " << ob2.getarea() << endl;
  cout << "Area of Rectangle 3: " << ob3.getarea() << endl;
  cout << "Area of clone Rectangle : " << obx.getarea() << endl;
  
 
  return 0;
}