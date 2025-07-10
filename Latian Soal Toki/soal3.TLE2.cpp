#include<bits/stdc++.h>
using namespace std;

int main(){
    int M,Q;
    vector<int>sorted,cari;
    int temp;
        cin >> M;
        for (int i = 0; i < M; i++){
            cin >> temp;
            sorted.push_back(temp);
        }

        cin >> Q;
        for (int i = 0; i < Q; i++){
            cin >> temp;
            cari.push_back(temp);
        }
        for (int i = 0; i < Q; i++){
            bool x=true;
            for (int j = 0; j < M; j++){
                if (cari[i]==sorted[j]){
                    cout << j << endl;
                    x = false;
                    break;
                }
            }
            if (x){
                cout << "-1" << endl;
            }
        }
}