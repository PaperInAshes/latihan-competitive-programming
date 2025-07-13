#include <iostream>
using namespace std;

int main() {
    // ================================
    // 🎯 1. Representasi status pakai bitmask
    // ================================
    int mask = 0; // Semua status OFF (0000)

    // ================================
    // 🔧 2. Mengaktifkan bit ke-i (ON)
    // ================================
    mask |= (1 << 2); // nyalakan bit ke-2 → mask = 00000100
    mask |= (1 << 0); // nyalakan bit ke-0 → mask = 00000101

    cout << "Mask setelah ON bit 2 dan 0: " << mask << " (biner)\n";

    // ================================
    // ❓ 3. Mengecek apakah bit ke-i ON
    // ================================
    for (int i = 0; i < 4; i++) {
        if (mask & (1 << i)) {
            cout << "Bit ke-" << i << " AKTIF\n";
        } else {
            cout << "Bit ke-" << i << " MATI\n";
        }
    }

    // ================================
    // ❌ 4. Mematikan bit ke-i (OFF)
    // ================================
    mask &= ~(1 << 0); // matikan bit ke-0
    cout << "Mask setelah matikan bit ke-0: " << mask << "\n";

    // ================================
    // 🔁 5. Membalik status bit ke-i (Toggle)
    // ================================
    mask ^= (1 << 2); // balikkan bit ke-2 → dari ON jadi OFF
    cout << "Mask setelah toggle bit ke-2: " << mask << "\n";

    // ================================
    // 🧪 6. Contoh Soal: Cetak semua subset dari array
    // ================================
    int A[3] = {10, 20, 30}; // array dengan 3 elemen
    int n = 3;

    cout << "\nSemua subset dari array A:\n";
    for (int bitmask = 0; bitmask < (1 << n); bitmask++) {
        cout << "{ ";
        for (int i = 0; i < n; i++) {
            if (bitmask & (1 << i)) {
                cout << A[i] << " ";
            }
        }
        cout << "}\n";
    }

    return 0;
}
