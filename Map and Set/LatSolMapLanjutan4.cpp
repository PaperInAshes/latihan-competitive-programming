#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, nilai;
    string nama, bidang;
        cin >> N;
    map<string, set<string>>lomba;
        for (int i = 0; i < N; i++){
            cin >> nama >> bidang >> nilai;
            lomba[nama].insert(bidang);
        }
        
        for (auto[namaa,bidang] : lomba){
            cout << namaa << ": ";
            for (auto nilaiii : bidang){
                cout << nilaiii << " ";
            }
            cout << endl;
        }
}