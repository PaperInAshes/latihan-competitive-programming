// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int N,K,temp;
//         cin >> N >> K;
//     vector<int>arr(N);
//     for (int i = 0; i < N; i++){
//         cin >> temp;
//         if (temp%2 != 0){
//             arr.push_back(-10000);
//         } else arr.push_back(temp);
//     }
//     int out=0;
//     for (int i = 0; i < N-(K-1); i++){
//         int jumlah = 0;
//         for (int j = 0; j < K; j++){
//             jumlah = jumlah + arr[j+i];
//         }
//         if (out < jumlah){
//             out = jumlah;
//         }
//     }
//     cout << out;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int N,K;
//         cin >> N >> K;
//     vector<int>arr(N),sum;
//         for (int i = 0; i < N; i++){
//             cin >> arr[i];
//         }

//         for (int i = 0; i < N-(K-1); i++){
//             int jumlah = 0;
//             for (int j = 0; j < K; j++){
//                 if (arr[j+i]%2 != 0){
//                     jumlah = 0;
//                     break;
//                 } else jumlah = jumlah + arr[j+i];
//             }
//             sum.push_back(jumlah);
//         }
//         auto x = *max_element(sum.begin(), sum.end());
//         cout << x;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int hasil = 0;
    for (int i = 0; i <= N - K; i++) {
        int jumlah = 0;
        bool valid = true;
        for (int j = 0; j < K; j++) {
            if (arr[i + j] % 2 != 0) {
                valid = false;
                break;
            }
            jumlah += arr[i + j];
        }
        if (valid) hasil = max(hasil, jumlah);
    }

    cout << hasil ;
}

