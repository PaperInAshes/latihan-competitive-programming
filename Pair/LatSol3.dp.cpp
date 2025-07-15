#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    
    vector<int> coin(n);
    for (int i = 0; i < n; ++i)
        cin >> coin[i];

    const int INF = 1e9;
    vector<int> dp(x + 1, INF);
    dp[0] = 0; // Base case: 0 uang → 0 koin

    for (int i = 1; i <= x; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i >= coin[j])
                dp[i] = min(dp[i], dp[i - coin[j]] + 1);
        }
    }

    if (dp[x] == INF)
        cout << -1 << '\n'; // Tidak bisa membentuk x
    else
        cout << dp[x] << '\n'; // Minimum jumlah koin
}
