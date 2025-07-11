#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int hasil = 0;
    for (int i = 0; i <= N - K; i++) {
        int jumlah = 0;
        for (int j = 0; j < K; j++) {
            jumlah += arr[i + j];
        }if (jumlah % 2 == 0) {
                hasil = max(hasil, jumlah);
        }
    }
    cout << hasil ;
}