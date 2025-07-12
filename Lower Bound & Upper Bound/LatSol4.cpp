#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;
        cin >> N >> Q;
    vector<int>arr(N);
        for (int i = 0; i < N; i++)cin >> arr[i];
        sort(arr.begin(), arr.end());
        for (int i = 0; i < Q; i++){
            int x;
            cin >> x;
            auto hasil = upper_bound(arr.begin(),arr.end(),x) - arr.begin();
            cout << hasil << endl;
        }
}