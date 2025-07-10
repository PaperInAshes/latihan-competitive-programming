#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, nilai;
    string nama, bidang;
        cin >> N;
    map<string, vector<int>>lomba;
        for (int i = 0; i < N; i++){
            cin >> nama >> bidang >> nilai;
            lomba[nama].push_back(nilai);
        }
        
        for (auto[namaa,nilaii] : lomba){
            cout << namaa << ": ";
            for (auto nilaiii : nilaii){
                cout << nilaiii << " ";
            }
            cout << endl;
        }
}