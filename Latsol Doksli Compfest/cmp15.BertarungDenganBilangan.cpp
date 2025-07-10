#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N,M;
        cin >> N;
    vector<int>A(N), B(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> B[i];
    map<int,int>FAB;
        for (int i = 0; i < N; i++) FAB[A[i]]=B[i];
        cin >> M;
    vector<int>C(M), D(M);
        for (int i = 0; i < M; i++) cin >> C[i];
        for (int i = 0; i < M; i++) cin >> D[i];
    map<int,int>FCD;
        for (int i = 0; i < M; i++) FCD[C[i]]=D[i];

        for (auto [C, D] : FCD) {
            if (FAB.find(C) == FAB.end() || FAB[C] < D) {
                cout << 0 << endl;
                return 0;
            } 
        }
    
    map<int, int> zfactor;
        for (auto [A, B] : FAB) {
            if (FCD.find(A) != FCD.end()) {
                int sisa = B - FCD[A];
                if (sisa > 0) zfactor[A] = sisa;
            } else {
                zfactor[A] = B;
            }
        }
    int64_t jawaban = 1;
    const int MOD = 998244353;

    int k = zfactor.size();
        for (int i = 0; i < k; i++) {
            jawaban = (jawaban * 2) % MOD;
        }
    cout << jawaban << endl;

}

