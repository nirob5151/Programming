/*Simple class program to find prime numbers using class prime. 
Take the input value as a private member and declare two public member functions get_input() to get the input from the user.
Another function is calculate () to calculate the input is prime or not and display it using the calculate () function.
*/
#include <iostream>
#include <cmath>
class Prime {
private:
    int num;

public:
    void get_input() {
        std::cout << "Enter a number: ";
        std::cin >> num;
    }
    void calculate() {
        if (num <= 1) {
        std::cout << num << " is not a prime number." << std::endl;
        } else if (num == 2) {
            std::cout << num << " is a prime number." << std::endl;
        } else {
            bool is_prime = true;
            for (int i = 2; i <= sqrt(num); i++) {
                if (num % i == 0) {
                    is_prime = false;
                    break;
                }
            }

            if (is_prime) {
                std::cout << num << " is a prime number." << std::endl;
            } else {
                std::cout << num << " is not a prime number." << std::endl;
            }
        }
    }
};

int main() {
    Prime prime_checker;

    prime_checker.get_input();
    prime_checker.calculate();

    return 0;
}
