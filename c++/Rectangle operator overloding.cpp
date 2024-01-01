#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length,wedth;
    public:
    Rectangle ()
    {
        length=0;
        wedth=0;
    }
    Rectangle(int l,int w)
    {
        length=l;
        wedth=w;
    }
    
    void showarea()
    {
        cout<<length<<" "<<wedth<<endl;
    }
    Rectangle operator ++();
    Rectangle operator --();
};
Rectangle Rectangle::operator++()
{
    length ++;
    return * this;
}
Rectangle Rectangle::operator--()
{
    wedth --;
    return * this;
}
int main()
{
    Rectangle r1(10,5);
    Rectangle r2(5,4);
  //  int length,wedth;
    ++ r1;
    r1.showarea();
    --r2;
    r2.showarea();
    return 0;
}