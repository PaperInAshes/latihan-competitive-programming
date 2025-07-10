#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;
        cin >> N;
    vector<int>arr(N);
        for (int i = 0; i < N; i++){
            cin >> arr[i];
        }
    sort(arr.begin(), arr.end());
        cin >> Q;
    vector<int>L(Q),R(Q);
        for (int i = 0; i < Q; i++){
            cin >> L[i] >> R[i];
        }
        
        for (int i = 0; i < Q; i++){
            auto kiri = lower_bound(arr.begin(), arr.end(), L[i]);
            auto kanan = upper_bound(arr.begin(), arr.end(), R[i]);
                cout << (kanan-kiri) << endl;
        }
        
}