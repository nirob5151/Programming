#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) 
    {
        int X, Y;
        cin >> X >> Y;
        int sum = 0;
        for (int i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
