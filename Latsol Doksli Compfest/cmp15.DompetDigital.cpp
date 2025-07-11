#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,M,K;
        cin >> N >> M >> K;
    vector<vector<int>> matrix(N,vector<int>(M));
        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                cin >> matrix[i][j];
            }
        }
    int oprasi = M-K+1; 
    long long total = 0; // Karena angka bisa besar

        for (int i = 0; i < oprasi; i++) {
            int maks = 0, baris_terpilih = -1, kolom_terpilih = -1;

        for (int r = 0; r < N; r++) {
            for (int j = i; j < i + K; j++) {
                if (matrix[r][j] > maks) {
                    maks = matrix[r][j];
                    baris_terpilih = r;
                    kolom_terpilih = j;
                }
            }
        }

    total += maks;
    if (baris_terpilih != -1) matrix[baris_terpilih][kolom_terpilih] = 0;
}

cout << total << '\n';

}