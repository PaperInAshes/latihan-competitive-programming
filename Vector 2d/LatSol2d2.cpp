#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,Q,max=0,temp;
        cin >> N >> Q;
    vector<vector<int>>grid(N,vector<int>(Q));
    for (int i = 0; i < N; i++){
        for (int j = 0; j < Q; j++){
            cin >> grid[i][j];
        }
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < Q; j++){
            if(max < grid[i][j]){
                max = grid[i][j];
                grid[i][j]=0;
            }
        }
        grid[i][0]=max;
        max = 0;
    }

    for (int i = 0; i < N; i++){
        cout << grid[i][0] << endl;
    }
}