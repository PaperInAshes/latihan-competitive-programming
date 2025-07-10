#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, K;
    string temp;
    set<string> A, B, C;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        A.insert(temp);
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> temp;
        B.insert(temp);
    }
    cin >> K;
    for (int i = 0; i < K; i++) {
        cin >> temp;
        C.insert(temp);
    }

    set<string> AB, AC, BC, ABC;
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(AB, AB.begin()));
    set_intersection(A.begin(), A.end(), C.begin(), C.end(), inserter(AC, AC.begin()));
    set_intersection(B.begin(), B.end(), C.begin(), C.end(), inserter(BC, BC.begin()));

    // Cari yang hadir di semua sesi
    set_intersection(AB.begin(), AB.end(), C.begin(), C.end(), inserter(ABC, ABC.begin()));

    // Cetak peserta semua sesi
    cout << "Peserta semua sesi:" << endl;
    for (string nama : ABC) {
        cout << nama << endl;
    }

    // Cari peserta yang ikut tepat dua sesi (AB + AC + BC) - ABC
    set<string> duaSesiGabung, tepatDua;
    set_union(AB.begin(), AB.end(), AC.begin(), AC.end(), inserter(duaSesiGabung, duaSesiGabung.begin()));
    set_union(duaSesiGabung.begin(), duaSesiGabung.end(), BC.begin(), BC.end(), inserter(duaSesiGabung, duaSesiGabung.begin()));
    set_difference(duaSesiGabung.begin(), duaSesiGabung.end(), ABC.begin(), ABC.end(), inserter(tepatDua, tepatDua.begin()));

    cout << "Peserta tepat dua sesi:" << endl;
    for (string nama : tepatDua) {
        cout << nama << endl;
    }

    // Cari semua peserta
    set<string> semua;
    set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(semua, semua.begin()));
    set_union(semua.begin(), semua.end(), C.begin(), C.end(), inserter(semua, semua.begin()));

    // Cari peserta hanya satu sesi: semua - (ABC ∪ tepatDua)
    set<string> duaAtauTiga;
    set_union(tepatDua.begin(), tepatDua.end(), ABC.begin(), ABC.end(), inserter(duaAtauTiga, duaAtauTiga.begin()));
    set<string> satuSesi;
    set_difference(semua.begin(), semua.end(), duaAtauTiga.begin(), duaAtauTiga.end(), inserter(satuSesi, satuSesi.begin()));

    cout << "Peserta hanya satu sesi:" << endl;
    for (string nama : satuSesi) {
        cout << nama << endl;
    }
}
