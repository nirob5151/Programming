/*Create two classes named Mammals and MarineAnimals. 
Create another class named BlueWhale which inherits both the above classes.
 Now, create a function in each of these classes which prints &quot; I am mammal&quot; &quot; 
 I am a marine animal&quot; and &quot; I belong to both 
 the categories: Mammals as well and Marine Animals&quot; respectively. Now, create an object for each of 
 the above classes and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale
*/

#include<bits/stdc++.h>
using namespace std;
class Mammals
{
    public:
    void data()
    {
        cout<<"I am Mammal"<<endl;
    }
};
class Marine_Animals
{
    public:
    void info()
    {
          cout<<"I am a Marine Animal"<<endl;
    }
};
class BlueWhale: public Mammals,public Marine_Animals
{
   public:
   void print()
   {
    cout<<"I Belong To Both The Categories:Mammals as Well as Marine Animal"<<endl;
   }
};
int main()
{
    Mammals p;
    Marine_Animals q;
    BlueWhale ob;
    p.data();
    q.info();
    ob.print();
    return 0;

}