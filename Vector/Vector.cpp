#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

int main(){
    vector<int>v; //deklarasi
    //push back => menambah satu kapasitas di belakang
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4); //jadi ada 4 kapasitas

    for (int i = 0; i < (int)v.size(); i++) { //.size() untuk menghitung jumlah kapasitas
        cout<<v[i]<<" "; //output 1 2 3 4 => menandakan ada 4 ruang atau kapasitas
    }
    cout<<endl;
    //pop back => menghilangkan 1 ruang paling belakang
    v.pop_back();
    for (int i = 0; i < (int)v.size(); i++) { //.size() untuk menghitung jumlah kapasitas
        cout<<v[i]<<" "; // output: 1 2 3 => karena 1 elemen terakhir (4) dihapus
    }
    cout<<endl;
    //front => menunjukkan ruang pertama
    cout<<v.front()<<endl;
    //back => menunjukkan ruang terakir
    cout<<v.back()<<endl;
    // Tambahan: hapus semua dan cek kosong
    v.clear();
    if (v.empty()) {
        cout << "Vector kosong!" << endl;
    }
}