#include <iostream>
using namespace std;

int main() {
    int T, N, i, j, count;
    cin >> T;
    while (T--) {
        cin >> N;
        int A[N];
        for (i = 0; i < N; i++) {
            cin >> A[i];
        }
        count = 0;
        for (i = 0; i < N; i++) {
            for (j = i; j < N; j++) {
                int Array = 1;
                for (int k = i; k <= j; k++) {
                    if (A[k] != A[i]) {
                        Array = 0;
                        break;
                    }
                }
                if (!Array) {
                    count++;
                }
            }
        }

        cout << "Case " << ": " << count << endl;
    }
    return 0;
}
