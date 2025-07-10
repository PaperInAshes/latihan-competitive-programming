#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,nilai,temp = 0;
        cin >> N;
    string bidang,nama;
    map<string,vector<int>>daftar;
        for (int i = 0; i < N; i++){
            cin >> nama >> bidang >> nilai;
            daftar[nama].push_back(nilai);
        }
        
        for (auto [namaa, nilaii] : daftar){
            cout << namaa << ": ";
            auto max_it = max_element(nilaii.begin(), nilaii.end()); //mencari nilai terbesar
                if (max_it != nilaii.end()) {
                    cout << *max_it << endl; 
                }
        }
}