#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,Q;
        cin >> N >> Q;
    vector<vector<int>>grid(N,vector<int>(Q));
    for (int i = 0; i < N; i++){
        for (int j = 0; j < Q; j++){
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < Q; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}