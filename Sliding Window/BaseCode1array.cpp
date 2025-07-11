#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Hitung jumlah awal untuk window pertama
    int jumlah = 0;
    for (int i = 0; i < K; i++) {
        jumlah += arr[i];
    }

    int maksimum = jumlah;

    // Sliding window
    for (int i = K; i < N; i++) {
        jumlah = jumlah - arr[i - K] + arr[i];
        maksimum = max(maksimum, jumlah);
    }

    cout << maksimum << '\n';
}


// ex : 
//N = 6, K = 3  
//arr = [1, 2, 3, 4, 5, 6]

/* Langkah 1: Window pertama (indeks 0 sampai 2)
makefile
Copy
Edit
Window: [1 2 3]
Jumlah = 1 + 2 + 3 = 6
Maksimum = 6*/

/*Langkah 2: Geser ke kanan 1 langkah (indeks 1 sampai 3)
makefile
Copy
Edit
Window: [2 3 4]
Jumlah = (sebelumnya 6) - 1 + 4 = 9
Maksimum = max(6, 9) = 9*/

/*Langkah 3: Geser ke kanan lagi (indeks 2 sampai 4)
makefile
Copy
Edit
Window: [3 4 5]
Jumlah = 9 - 2 + 5 = 12
Maksimum = max(9, 12) = 12*/

/*Langkah 4: Geser ke kanan lagi (indeks 3 sampai 5)
makefile
Copy
Edit
Window: [4 5 6]
Jumlah = 12 - 3 + 6 = 15
Maksimum = max(12, 15) = 15*/

/*Hasil akhir:
Maksimum total 3 elemen berurutan = 15*/