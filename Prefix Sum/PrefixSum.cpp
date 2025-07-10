#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int x = 2, y = 3; // Hitung sum dari index 2 ke 3 => 3 + 4 = 7
    int prefixSum[6] = {0}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    // Membuat array prefix sum
    for (int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
    }

    // Hasil prefix sum array
    cout << "Prefix Sum: ";
    for (int i = 0; i <= n; i++) {
        cout << prefixSum[i] << " ";
    }
    cout << endl;

    // Hitung jumlah dari index x ke y (inclusive)
    int sum = prefixSum[y + 1] - prefixSum[x];
    cout << "Sum dari index " << x << " ke " << y << " = " << sum << endl;

    return 0;
}
