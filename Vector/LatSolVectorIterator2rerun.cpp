#include<iostream>
#include<vector>
#include<set>
using namespace std;

void rata(vector<int>::iterator awal, vector<int>::iterator akhir, int N) {
    int sum = 0;
    float mean;
    set<int> s;

    for (auto it = awal; it != akhir; ++it) {
        sum += *it;
        if (*it % 5 == 0) {
            s.insert(*it);
        }
    }

    mean = sum * 1.0 / N;

    cout << "Nilai di atas rata-rata: ";
    for (auto it = awal; it != akhir; ++it) {
        if (*it > mean) {
            cout << *it << " ";
        }
    }
    cout << endl;

    cout << "Kelipatan 5 unik: ";
    for (int y : s) {
        cout << y << " ";
    }
    cout << endl;
}
/*lebih efisien Gunakan langsung cout daripada vector x jika tidak perlu menyimpan

cout << "Nilai di atas rata-rata: ";
for (auto it = awal; it != akhir; ++it) {
    if (*it > mean) {
        cout << *it << " ";
    }
}
Ini menghindari pembuatan vector x tambahan*/ 