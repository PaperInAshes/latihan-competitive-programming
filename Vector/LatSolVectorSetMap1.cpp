#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    map<string, int> daftar;
    set<string> kelas1, kelas2;
    string temp;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        kelas1.insert(temp);
        daftar[temp]++;
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> temp;
        kelas2.insert(temp);
        daftar[temp]++;
    }

    cout << "Nama yang muncul lebih dari 1 kali:" << endl;
    for (auto [nama, jumlah] : daftar) {
        if (jumlah > 1) {
            cout << nama << endl;
        }
    }

    // Cari nama yang hanya muncul di salah satu kelas
    set<string> hanyaSatu;
    set_symmetric_difference(
        kelas1.begin(), kelas1.end(),
        kelas2.begin(), kelas2.end(),
        inserter(hanyaSatu, hanyaSatu.begin())
    );

    cout << endl << "Nama unik yang hanya muncul di salah satu kelas:" << endl;
    for (auto x : hanyaSatu) {
        cout << x << endl;
    }

    return 0;
}
