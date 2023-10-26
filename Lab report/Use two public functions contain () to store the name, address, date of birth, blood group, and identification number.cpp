/*Create a class called the person that maintains a register. 
The register contains the name and address blood group, date of birth, and identification number. 
Store the name, address, and blood group as a string and the identification number as an integer value.
 Use two public functions contain () to store the name, address, date of birth, blood group, and 
 identification number. And another public function display () will display the information.*/
 #include<iostream>
using namespace std;
class Person{
  public:
  string Name,Address,Blood,Date;
  int ID;
  void contain(){
    cin>>Name>>Address>>Date>>Blood>>ID;
  }
  void display(){
    cout<<Name<<" "<<Address<<"  "<<Date<<"  "<<Blood<<ID;
  }
};
int main(){
  Person ob;
  ob.contain();
  ob.display();
return 0;
}
