#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,M,K;
        cin >> N >> M >> K;
    vector<vector<int>> matrix(N,vector<int>(M));
        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                cin >> matrix[i][j];
            }
        }
    int oprasi = M-K+1; 
    long long dompet = 0; 
    int terbesar = INT_MIN, L = -1, R = -1;

    
    for (int i = 0; i < oprasi; i++){
        int terbesar = INT_MIN, L = -1, R = -1;
        for (int j = i; j < K+i; j++){
            for (int k = 0; k < N; k++){
                if (terbesar<matrix[k][j]){
                    terbesar = matrix[k][j];
                    L=k;
                    R=j;
                } 
            }
        }
        if (L != -1 && R != -1) {
            dompet += terbesar;
            matrix[L][R] = INT_MIN;
        }
    }

    cout << dompet;
}
