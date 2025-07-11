#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
        cin >> N >> K;
    vector<int>arr(N),sum;
        for (int i = 0; i < N; i++){
            cin >> arr[i];
        }

        for (int i = 0; i < N-(K-1); i++){
            int jumlah = 0;
            for (int j = 0; j < K; j++){
                jumlah = jumlah + arr[j+i];
            }
            sum.push_back(jumlah);
            cout << sum[i] << " ";
        }
        auto x = *max_element(sum.begin(), sum.end());
        cout << endl << x;
}

