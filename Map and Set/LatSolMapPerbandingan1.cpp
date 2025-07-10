#include<bits/stdc++.h>
using namespace std;

int main(){
    int M,N;
        cin >> M;
    string temp;
    map<string, int> daftar;
        for (int i = 0; i < M; i++){
            cin >> temp;
            daftar[temp]++;
        }
        cin >> N;
        for (int i = 0; i < N; i++){
            cin >> temp;
            daftar[temp]++;
        }
        
        cout << "Total kehadiran:" << endl;
        for (auto [nama, sum] : daftar){
            cout << nama << "; " << sum << endl;
        }
        cout << endl << "Hadir di kedua sesi:" << endl;
        for (auto [nama, sum] : daftar){
            if(sum > 1) cout << nama << endl;
        }
        cout << endl << "Hadir hanya di satu sesi:" << endl;
        for (auto [nama, sum] : daftar){
            if(sum == 1) cout << nama << endl;
        }
}