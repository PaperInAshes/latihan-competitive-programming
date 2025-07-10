#include<iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cin >> M;
    int x[M], y[M], sum[M];

    for (int i = 0; i < M; i++) {
        cin >> x[i] >> y[i];
    }

    int prefixSum[N + 1] = {0};

    // Hitung prefix sum
    for (int i = 1; i <= N; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
    }

    // Cetak prefix sum (optional, untuk debugging)
    cout << "Prefix Sum: ";
    for (int i = 0; i <= N; i++) {
        cout << prefixSum[i] << " ";
    }
    cout << endl;

    // Jawab query
    for (int i = 0; i < M; i++) {
        sum[i] = prefixSum[y[i] + 1] - prefixSum[x[i]];
        cout << sum[i] << endl;
    }

    return 0;
}
