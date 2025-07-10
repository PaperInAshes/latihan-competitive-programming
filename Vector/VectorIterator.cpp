#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

void cetakvector(vector<int>::iterator awal, vector<int>::iterator akhir) {
    for (auto it = awal; it != akhir; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return;
}

void cetakvectorganjil(vector<int>::iterator awal, vector<int>::iterator akhir){
    for (auto i = awal; i != akhir; i++){
        if (*i%2 != 0){
            cout << *i << " ";
        }
    }
    cout << endl;
}

int main(){
    vector<int>v = {1,2,3,4,5};
    vector<int>::iterator it; //berfungsi seperti pointer

    it = v.begin(); // it menunjuk ke elemen pertama
    cout << *it << endl; // it berisi elemen pertama v
    it++; // it bergeser mennunjuk ke elemen ke dua
    cout << *it << endl; // it berisi elemen kedua v

    it--;
    vector<int>::iterator awal = v.begin();
    vector<int>::iterator akhir = v.end();
    cetakvector(awal,akhir);
    cetakvectorganjil(awal,akhir);
   
    return 0;
}

