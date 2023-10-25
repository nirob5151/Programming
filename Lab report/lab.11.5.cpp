#include<iostream>

using namespace std;

class Myclass
{
 public:
      int x,y;
      Myclass(int a, int b)
      {
          x=a;
          y=b;
      }

      Myclass operator --()
      {
          Myclass ckd(x,y);
          x--;
          y--;
          ckd.x=x;
          ckd.y=y;
          
          return ckd;
      }

      void printf()
      {
          cout << x <<endl << y;
      }
};


int main()
{
    int s,d;
    cin >> s >> d;
    Myclass ms(s,d);
    --ms;
    ms.printf();

    return 0;
}
