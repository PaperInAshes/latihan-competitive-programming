#include <bits/stdc++.h>
using namespace std;

int main(){
/**
 * 👑 MASTERCLASS: C++ STL pair
 * -----------------------------------------
 * pair<T1, T2> adalah struktur data bawaan C++ STL
 * yang digunakan untuk menyimpan dua elemen (first, second).
 * 
 * Contoh umum penggunaan:
 * - koordinat (x, y)
 * - pasangan (key, value)
 * - sorting berdasarkan 2 kriteria
 * - graph: menyimpan (berat, node)
 */

// ✅ 1. DEKLARASI DAN INISIALISASI

pair<int, int> p1 = {3, 7};               // deklarasi langsung
pair<int, string> p2 = make_pair(10, "hi"); // bisa juga make_pair()

// ✅ 2. AKSES NILAI

cout << p1.first << " " << p1.second << endl; // Output: 3 7

// ✅ 3. PERBANDINGAN & SORTING DEFAULT
// pair bisa dibandingkan langsung: urut berdasarkan first, lalu second

pair<int, int> a = {1, 5}, b = {1, 3};
cout << (a < b) << endl; // false, karena 5 > 3

vector<pair<int, int>> v1 = {{2, 3}, {1, 4}, {2, 1}};
sort(v1.begin(), v1.end()); // hasil: {1,4}, {2,1}, {2,3}

// ✅ 4. CUSTOM SORTING
// Contoh: urutkan ascending berdasarkan first, tapi descending berdasarkan second

vector<pair<int, int>> v2 = {{1, 10}, {1, 20}, {2, 5}, {2, 50}, {3, 10}};
sort(v2.begin(), v2.end(), [](pair<int,int> a, pair<int,int> b){
    if (a.first != b.first) return a.first < b.first;
    return a.second > b.second;
});

// ✅ 5. NESTED PAIR
// Pair dalam pair: bisa menyimpan 3 elemen

pair<int, pair<int, int>> p_nested = {1, {2, 3}};
cout << p_nested.first << endl;            // Output: 1
cout << p_nested.second.first << endl;     // Output: 2
cout << p_nested.second.second << endl;    // Output: 3

// ✅ 6. STRUCTURED BINDING (C++17 KE ATAS)
// Penulisan lebih clean untuk loop pair

vector<pair<int, int>> v3 = {{10, 100}, {20, 200}};
for (auto& [x, y] : v3) {
    cout << x << " " << y << endl;
}

// ✅ 7. PAIR + STL CONTAINER
// Pair sering digunakan dalam vector, map, set, priority_queue

vector<pair<int, int>> vec_of_pair;
map<pair<int, int>, string> map_with_pair;
set<pair<int, int>> set_of_pair;
priority_queue<pair<int, int>> pq_of_pair; // max-heap by default

// ✅ 8. COMPARISON TRICK: max/min langsung pakai STL

pair<int, int> pmax1 = {3, 10};
pair<int, int> pmax2 = {3, 5};

auto maks = max(pmax1, pmax2); // {3, 10}
auto mins = min(pmax1, pmax2); // {3, 5}

// ✅ 9. TUPLE = GENERALISASI PAIR UNTUK 3+ ELEMEN
// Kalau kamu butuh lebih dari 2 nilai, bisa pakai tuple

tuple<int, int, int> t = {1, 2, 3};
cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

// ✅ 10. PAIR DALAM GRAPH / CP
// Dalam soal graph, Dijkstra, A*, dll, kita sering pakai pair

// Contoh graph weighted:
int n = 5;
vector<pair<int, int>> adj[n]; // adj[u] menyimpan {berat, tujuan}

// Tambahkan edge dari u ke v dengan bobot w
int u = 1, v = 2, w = 10;
adj[u].push_back({w, v});

// Contoh priority queue untuk Dijkstra:
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
// menyimpan {jarak, node} dan pakai min-heap

// ✅ 11. PAIR SEBAGAI KEY PADA MAP
// Cocok untuk kombinasi koordinat, state DP, atau edge graf tidak berarah

map<pair<int, int>, bool> sudah_cek;
sudah_cek[{2, 3}] = true;

// ✅ 12. COMBINING VECTOR<PAIR> + SORT UNTUK INTERVAL
// Banyak soal greedy pakai vector<pair<int, int>> disort

vector<pair<int, int>> interval = {{1, 3}, {2, 5}, {3, 6}};
sort(interval.begin(), interval.end(), [](auto a, auto b) {
    return a.second < b.second; // urut berdasarkan waktu selesai
});

}