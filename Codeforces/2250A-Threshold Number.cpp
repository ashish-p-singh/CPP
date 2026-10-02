#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> w(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }

    if (n % 2 != 0) {
        cout << "NO\n";
        return;
    }

    int L = -1;
    int R = 2e9 + 7;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            L = max(L, w[i]); // even positions move left (w_i < k)
        } else {
            R = min(R, w[i]); // odd positions move right (w_i > k)
        }
    }

    if (L + 2 <= R) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
