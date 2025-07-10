#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,Q,index1, index2;
    char barisA, barisB;
        cin >> N;
    vector<int>baris1(N);
    vector<int>baris2(N);
        for (int i = 0; i < N; i++){
            cin >> baris1[i];
        }
        for (int i = 0; i < N; i++){
            cin >> baris2[i];
        }
        
        cin >> Q;
        for (int i = 0; i < Q; i++){
            cin >> barisA >> index1 >> barisB >> index2;
            if (barisA == 'A' && barisB == 'A'){
                swap(baris1[index1-1], baris1[index2-1]);
            } else if (barisA == 'A' && barisB == 'B'){
                swap(baris1[index1-1], baris2[index2-1]);
            } else if (barisA == 'B' && barisB == 'A'){
                swap(baris2[index1-1], baris1[index2-1]);
            } else if (barisA == 'B' && barisB == 'B'){
                swap(baris2[index1-1], baris2[index2-1]);
            }
        }
        
        for (int i = 0; i < N; i++){
            cout << baris1[i] << " ";
        }
            cout << endl;
        for (int i = 0; i < N; i++){
            cout << baris2[i] << " ";
        }
}