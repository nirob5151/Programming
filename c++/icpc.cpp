#include <iostream>
#include <string>

using namespace std;

int main() {
    int T,overs = 0, balls = 0, runs = 0, wickets = 0;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        string S;
        cin >> S;
        for (char ball : S) {
            if (ball == 'W') {
                wickets++;
                balls++;
            } else {
                int runsConceded = ball - '0';
                runs += runsConceded;
                balls++;

                if (balls % 6 == 0) {
                    overs++;
                    balls = 0;
                }
            }
        }

        cout << "Case " << t << ": " << overs << "." << balls << " over(s) " << runs << " run(s) " << wickets << " wicket(s)" << endl;
    }

    return 0;
}