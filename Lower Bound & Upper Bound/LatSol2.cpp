#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,Q,L,R;
        cin >> N >> Q;
    vector<int>arr(N);
        for (int i = 0; i < N; i++)cin >> arr[i];
        for (int i = 0; i < Q; i++){
            cin >> L >> R;
            auto hasil = (upper_bound(arr.begin(),arr.end(),R) - lower_bound(arr.begin(),arr.end(),L));
            cout << hasil << endl;
        }
}