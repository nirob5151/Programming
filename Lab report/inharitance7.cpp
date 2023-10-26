/*Write a simple class that prints a random number every time ‘n’ is pressed by the keyboard*/
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

class RandomNumberGenerator {
public:
    void run() {
        while (true) {
            if (_kbhit()) {
                char key = _getch(); 
                if (key == 'n' || key == 'N') {
                    int randomNumber = generateRandomNumber();
                    std::cout << "Random Number: " << randomNumber << std::endl;
                }
            }
        }
    }
private:
    int generateRandomNumber() {
        srand(static_cast<unsigned>(time(0)));
        return rand();
    }
};
int main() {
    RandomNumberGenerator generator;
    generator.run();
    return 0;
}