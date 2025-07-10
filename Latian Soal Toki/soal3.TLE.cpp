#include<bits/stdc++.h>
using namespace std;

int cariin(int M, int temp, vector<int>sorted){
    int kiri = 0, kanan = M-1;
    while (kiri<=kanan){
        int tengah = (kiri+kanan)/2;
        if (sorted[tengah] == temp){
            return temp;
        } else if (sorted[tengah] < temp){
            kiri = tengah+1;
        } else{
            kanan = tengah - 1;
        } 
    }
    return -1;
}

int main(){
    int M,Q;
        cin >> M;
    map<int, int>asli;
    vector<int>sorted,cari;
    int temp;
        for (int i = 0; i < M; i++){
            cin >> temp;
            asli[temp]=i;
            sorted.push_back(temp);
        }
    sort(sorted.begin(), sorted.end());
        cin >> Q;
        for (int i = 0; i < Q; i++){
            cin >> temp;
            cari.push_back(temp);
        }
    int hasil;
    for (int i = 0; i < Q; i++){
        temp = cari[i];
        hasil = cariin(M,temp,sorted);
        if (hasil == -1){
            cout << hasil << endl;
        }else{
            for (auto [arr,index] : asli){
                if (hasil == arr){
                    cout << index << endl;
                }
            }
        }
    }
}