#include<bits/stdc++.h>
using namespace std;

bool serch(int arr[], int N, int cari[], int index){
    int kiri = 0, kanan = N-1;
    while (kiri <= kanan){
        int tengah = (kanan + kiri)/2;
        if (arr[tengah] == cari[index]) return true;
        else if (arr[tengah] < cari[index]) kiri = tengah + 1;
        else kanan = tengah - 1;
    }
    return false;
}

int main(){
    int M,N,X;
        cin >> M >> N;
    int cari[N];
    set<int>temp;
        for (int i = 0; i < M; i++){
            cin >> X;
            temp.insert(X);
        }
    int arr[size(temp)], index=0;
    for (int uhh : temp){
        arr[index++]=uhh;
    }
    index = 0;
    for (int i = 0; i < N; i++){
        cin >> cari[i];
    }
    
    for (int i = 0; i < N; i++){
        if (serch(arr,N,cari,index) == true){
            cout << "ADA" << endl;
        }else {
            cout << "TIDAK ADA" << endl;
        }
        index++;
    }
    
}