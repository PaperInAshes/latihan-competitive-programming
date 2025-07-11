#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,Q, hasil, index;
        cin >> N >> Q;

    vector<vector<int>>grid(N,vector<int>(Q));
    vector<int>sum(N);
    for (int i = 0; i < N; i++){
        for (int j = 0; j < Q; j++){
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < Q; j++){
            sum[i]=sum[i]+grid[i][j];
        }
    }

    for (int i = 0; i < N; i++){
        if (hasil < sum[i]){
            hasil = sum[i];
            index = i;
        }
    }
    cout << index << " " << hasil;
}