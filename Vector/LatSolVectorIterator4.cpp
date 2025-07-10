#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
        cin >> N;
    set<int>s;
    vector<int>v(N);
    map<int, int>m;
        for (int i = 0; i < N; i++){
            cin >> v[i];
            m[v[i]]++;
            if (v[i]%10 == 0){
                s.insert(v[i]);           
            }
        }
    cout << "Frekuensi nilai:" << endl;
    for (auto [elemen, sum] : m){
        cout << elemen << ": " << sum << endl;
    }
    cout << endl << "Nilai yang muncul lebih dari 1x: ";
    for (auto [elemen, sum] : m){
        if (sum > 1){
            cout << elemen << " ";
        }
    }
    cout << endl << "Kelipatan 10 unik: ";
    for(int x : s){
        cout << x << " ";
    }
}