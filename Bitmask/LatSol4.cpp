#include<bits/stdc++.h>
using namespace std;

int main(){
    //total subset genap
    int n;
        cin >> n;
    vector<int>arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
    
        int genap=0;
        for (int mask = 0; mask < (1<<n); mask++){
            int jumlah_elemen = 0;
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    jumlah_elemen++;
                }
            }
            if ((jumlah_elemen&1)==0){
                genap++;
            }
        }

        cout << genap;
}