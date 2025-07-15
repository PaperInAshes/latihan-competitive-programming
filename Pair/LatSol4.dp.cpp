#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Input jumlah tugas

    // Simpan tugas dalam bentuk: {{start, end}, value}
    vector<pair<pair<int,int>, int>> tugas(n); 
    for (int i = 0; i < n; i++) {
        int s, e, v;
        cin >> s >> e >> v; // input start, end, value
        tugas[i] = {{s, e}, v}; // masukkan ke vector tugas
    }

    // Urutkan berdasarkan waktu selesai (end time)
    sort(tugas.begin(), tugas.end(), [](auto &a, auto &b) {
        return a.first.second < b.first.second;
    });

    // Inisialisasi DP
    // dp[i] = nilai maksimal sampai tugas ke-i (terurut berdasarkan end)
    vector<int> dp(n);
    dp[0] = tugas[0].second; // tugas pertama, nilai maksimal = value tugas pertama

    for (int i = 1; i < n; i++) {
        int incl = tugas[i].second; // nilai jika ambil tugas ke-i

        // Cari tugas sebelumnya yang tidak bentrok
        // (end tugas sebelumnya <= start tugas sekarang)
        int l = 0, r = i - 1, j = -1;
        while (l <= r) {
            int m = (l + r) / 2;
            // tugas[m].first.second = end tugas ke-m
            // tugas[i].first.first = start tugas ke-i
            if (tugas[m].first.second <= tugas[i].first.first) {
                j = m;      // tugas ke-m bisa diambil
                l = m + 1;  // cari yang lebih akhir
            } else {
                r = m - 1;
            }
        }

        // Jika ada tugas sebelumnya yg tidak bentrok, tambahkan nilainya
        if (j != -1) incl += dp[j];

        // Pilih yang terbaik: ambil tugas i atau tidak
        dp[i] = max(dp[i-1], incl);
    }

    // Output: nilai maksimal yang bisa didapat
    cout << dp[n-1] << '\n';
}
