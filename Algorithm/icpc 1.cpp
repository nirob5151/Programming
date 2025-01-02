#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> permutation(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> permutation[i];
        if (permutation[i] < 1 || permutation[i] > N) {
            cerr << "Error: Invalid permutation value " << permutation[i] << " at position " << i + 1 << endl;
            return;
        }
    }

    vector<bool> visited(N, false);
    vector<pair<int, int>> swap_operations;
    int total_cost = 0;

    for (int i = 0; i < N; ++i) {
        if (!visited[i]) {
            vector<int> cycle;
            int x = i;

            while (!visited[x]) {
                visited[x] = true;
                cycle.push_back(x);
                x = permutation[x] - 1;
            }

            for (int j = 0; j < cycle.size(); ++j) {
                int idx1 = cycle[j];
                int idx2 = cycle[(j + 1) % cycle.size()];
                swap_operations.push_back({idx1 + 1, idx2 + 1});
                total_cost += (idx1 + 1) & (idx2 + 1);
            }
        }
    }

    cout << total_cost << "\n";
    cout << swap_operations.size() << "\n";
    for (const auto& op : swap_operations) {
        cout << op.first << " " << op.second << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}