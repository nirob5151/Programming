/*Create a class called a card that maintains a library card catalog entry. 
In the card, it will store a book’s title, author, and number of copies on hand.
 Store the title, and author as a string, and the number of books on hand as an integer value. 
 Use two public functions store () to store the title, author, and number of books on hand. 
And another public function display () will display the information.*/
#include<iostream>
using namespace std;
class Card{
  public:
  string title,author;
  int num_book;
  void store(){
    cin>>title>>author>>num_book;
  }
  void display(){
    cout<<title<<author<<num_book;
  }
};
int main(){
  Card ob;
  ob.store();
  ob.display();
return 0;
}