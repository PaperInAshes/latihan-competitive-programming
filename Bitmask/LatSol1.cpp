#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> n;
    }

    int jumlah_genap = 0;

    // Loop semua kemungkinan subset menggunakan bitmask
    for (int mask = 0; mask < (1 << n); mask++) {
        int total = 0;

        // Iterasi elemen ke-i, cek apakah dia masuk dalam subset ini
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                total += A[i]; // jika bit ke-i aktif, masukkan A[i]
            }
        }

        // Cek apakah totalnya genap
        if (total % 2 == 0) {
            jumlah_genap++;
        }
    }

    cout << jumlah_genap << endl;

    return 0;
}


//(a<<n) -> a*2^n
//(a>>n) -> a/2^n