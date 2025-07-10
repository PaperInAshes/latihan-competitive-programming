#include <bits/stdc++.h>
using namespace std;

void print(int i, int j) {
    cout << i + 1 << " " << j + 1 << "\n"; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> grid(N, vector<int>(M));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> grid[i][j];

    int best_i = -1, best_j = -1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int hasil = 1;
            bool adaTetangga = false;

            // atas
            if (i - 1 >= 0) {
                hasil *= grid[i - 1][j];
                adaTetangga = true;
            }

            // bawah
            if (i + 1 < N) {
                hasil *= grid[i + 1][j];
                adaTetangga = true;
            }

            // kiri
            if (j - 1 >= 0) {
                hasil *= grid[i][j - 1];
                adaTetangga = true;
            }

            // kanan
            if (j + 1 < M) {
                hasil *= grid[i][j + 1];
                adaTetangga = true;
            }

            if (adaTetangga && hasil == K) {
                if (best_j == -1 || j < best_j || (j == best_j && i < best_i)) {
                    best_i = i;
                    best_j = j;
                }
            }
        }
    }

    if (best_i == -1)
        cout << "0 0\n";
    else
        print(best_i, best_j);
}