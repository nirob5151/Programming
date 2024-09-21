#include <iostream>
using namespace std;

int main() {
  int num, array[500], i, a, d, flag;

  cout << "Enter number of elements" << endl;
  cin >> num;
  cout << "Enter " << num << " integers" << endl;
  for (i = 0; i < num; i++) {
    cin >> array[i];
  }
  for (i = 1; i <= num - 1; i++) {
    d = array[i];
    flag = 0;

    for (a = i - 1; a >= 0; a--) {
      if (array[a] > d) {
        array[a + 1] = array[a];
        flag = 1;
      } else {
        break;
      }
    }
    if (flag) {
      array[a + 1] = d;
    }
  }
  cout << "Sorted list in ascending order:" ;
  for (i = 0; i <= num - 1; i++) {
    cout << array[i] << " ";
  }

  return 0;
}