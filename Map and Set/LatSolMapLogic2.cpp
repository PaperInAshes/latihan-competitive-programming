#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,temp;
    string bidang,nama;
    map<string, int> daftar;
        cin >> N;
        for (int i = 0; i < N; i++){
            cin >> nama >> bidang >> temp;
            daftar[bidang]++;
        }
        
    string favorit = "";
    int maks = -1;

    for (auto [lomba, sum] : daftar) {
        if (sum > maks || (sum == maks && lomba < favorit)) {
            maks = sum;
            favorit = lomba;
        }
    }
    cout << favorit << ": " << maks;      
}