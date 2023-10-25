#include<bits\stdc++.h>
using namespace std;
int main() {
  int low, high, i;
  cout << "Enter two numbers (intervals): ";
  cin >> low >> high;
  cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;
  for (int num = low; num <= high; num++) 
  {
    if (num <= 1)
      continue;
    bool is_prime = true;
    for (i = 2; i * i <= num; ++i) {
      if (num % i == 0) {
        is_prime = false;
        break;
      }
    }
    if (is_prime)
      cout << num << ", ";
  }

  return 0;
}
