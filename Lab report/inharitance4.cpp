/*Input a string in a base class. Convert that string into uppercase in the child class.*/
#include <iostream>
#include <string>
using namespace std;

class Base {
public:
    string n;
    void input() 
    {
    cout << "Enter a string: ";
    cin >> n;
    }
};
class Child : public Base {
public:
    void convertToUppercase()
     {
        for (char &c : n)
     {
        if (c >= 'a' && c <= 'z') 
      {
        c = c - 'a' + 'A';
      }
     }
    }
};
int main() {
    Child obj;
    obj.input();
    obj.convertToUppercase();
    cout << "Uppercase string: " << obj.n << endl;
    return 0;
}
