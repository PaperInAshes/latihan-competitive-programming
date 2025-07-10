#include <bits/stdc++.h>
using namespace std;

bool serch(int arr[], int N, int target) {
    int kiri = 0, kanan = N - 1;
    while (kiri <= kanan) {
        int tengah = (kiri + kanan) / 2;
        if (arr[tengah] == target) return true;
        else if (arr[tengah] < target) kiri = tengah + 1;
        else kanan = tengah - 1;
    }
    return false;
}

int main() {
    int M, N, X;
    cin >> M >> N;
    
    set<int> temp;
    for (int i = 0; i < M; i++) {
        cin >> X;
        temp.insert(X);
    }

    int arr[temp.size()];
    int index = 0;
    for (int val : temp) {
        arr[index++] = val;
    }

    for (int i = 0; i < N; i++) {
        int cari;
        cin >> cari;

        if (serch(arr, temp.size(), cari)) {
            cout << "ADA" << endl;
        } else {
            cout << "TIDAK ADA" << endl;
        }
    }

    return 0;
}
