#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
        cin >> N >> M;
    vector<int>arr(N);
        for (int i = 0; i < N; i++)cin >> arr[i];

    sort(arr.begin(), arr.end());    
    auto hasil = (upper_bound(arr.begin(),arr.end(),M))-(lower_bound(arr.begin(), arr.end(), M));
    cout << hasil;
}