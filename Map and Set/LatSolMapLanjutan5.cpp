#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,nilai;
    string nama, bidang;
        cin >> N;
    map<string,map<string,int>>Lomba;
        for (int i = 0; i < N; i++) {
            cin >> nama >> bidang >> nilai;
            Lomba[nama][bidang]=nilai;
        }
        for (auto [nama,gabung]: Lomba){
            cout << nama << ":" << endl;
            for (auto[bidang, nilai]:gabung){
                cout << "  " << bidang << ": " << nilai << endl;
            }
        }
}