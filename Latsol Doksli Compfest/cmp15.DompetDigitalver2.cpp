#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> A(N, vector<int>(M));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> A[i][j];

    int operasi = M - K + 1;
    long long dompet = 0;

    for (int p = 0; p < operasi; ++p) {
        int max_val = INT_MIN;
        int max_row = -1, max_col = -1;

        for (int i = 0; i < N; ++i) {
            for (int j = p; j < p + K; ++j) {
                if (A[i][j] > max_val) {
                    max_val = A[i][j];
                    max_row = i;
                    max_col = j;
                }
            }
        }

        if (max_row != -1 && max_col != -1) {
            dompet += max_val;
            A[max_row][max_col] = 0; 
        }
    }

    cout << dompet << '\n';
}
