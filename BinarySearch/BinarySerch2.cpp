#include <bits/stdc++.h>
using namespace std;

// Fungsi untuk mengecek apakah mungkin mengirim semua paket dengan kapasitas 'kapasitas' dalam <= K hari
bool bisaDikirim(vector<int>& paket, int kapasitas, int K) {
    int hari = 1;
    int muatan = 0;
    for (int berat : paket) {
        if (berat > kapasitas) return false; // tidak mungkin
        if (muatan + berat > kapasitas) {
            hari++;
            muatan = berat;
        } else {
            muatan += berat;
        }
    }
    return hari <= K;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> paket(N);
    int total = 0;
    int maksimum = 0;
    for (int i = 0; i < N; i++) {
        cin >> paket[i];
        total += paket[i];
        maksimum = max(maksimum, paket[i]);
    }

    int kiri = maksimum;  // kapasitas minimal harus bisa angkut paket terbesar
    int kanan = total;    // kapasitas maksimal adalah jumlah semua paket
    int jawaban = total;

    while (kiri <= kanan) {
        int tengah = (kiri + kanan) / 2;
        if (bisaDikirim(paket, tengah, K)) {
            jawaban = tengah;
            kanan = tengah - 1;
        } else {
            kiri = tengah + 1;
        }
    }

    cout << jawaban << endl;
    return 0;
}
