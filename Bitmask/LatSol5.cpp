#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
        cin >> N >> K;
    vector<int>arr(N);
        for (int i = 0; i < N; i++){
            cin >> arr[i];
        }
        int genap = 0;
        for (int mask = 0; mask < (N<<1); mask++){
            int jumlah_elemen = 0;
            for (int i = 0; i < N; ++i) {
                if (mask & (1 << i)) {
                    jumlah_elemen++;
                }
            }
            if ((jumlah_elemen&1)==0){
                
            }
        }

        cout << genap;
}