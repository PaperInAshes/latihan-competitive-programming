#include<iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int arr[N], prefix[N + 1];
    int x[M], y[M], sum[M];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> x[i] >> y[i];
    }

    // Hitung prefix sum
    prefix[0] = 0;
    for (int i = 1; i <= N; i++) {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }

    // Jawab query
    for (int i = 0; i < M; i++) {
        sum[i] = prefix[y[i] + 1] - prefix[x[i]];
        cout << sum[i] << endl;
    }

    return 0;
}
