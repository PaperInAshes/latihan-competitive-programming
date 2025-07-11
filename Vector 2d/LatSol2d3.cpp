#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    cin >> N >> Q;
    vector<vector<int>> grid(N, vector<int>(Q));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < Q; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        int maks = 0;
        for (int j = 0; j < Q; j++) {
            maks = max(maks, grid[i][j]);
        }
        cout << maks << '\n';
    }
}
