#include<bits/stdc++.h>
using namespace std;

int biner(int arr[], int index, int N){
    int kiri=0, kanan=N-1;
    int ans=-1;
    while (kiri <= kanan){
        int tengah=(kanan+kiri)/2;
            if (arr[tengah] == index){
                ans = tengah;
                kanan = tengah - 1;
            }else if (arr[tengah] > index){
                kanan = tengah-1;
            }else
                kiri = tengah+1;
    }
    if (ans>-1){
        return ans;
    } else
        return -1;
}

int main(){
    int N,Q;
        cin >> N;
    int arr[N];
        for (int i = 0; i < N; i++){
            cin >> arr[i];
        }
        sort(arr,arr+N);
        cin >> Q;
    int cari[Q];
        for (int i = 0; i < Q; i++){
            cin >> cari[i];
        }
    
        for (int i = 0; i < Q; i++){
        int index=cari[i];
        int hasil = biner(arr,index,N);
        cout << hasil << endl;
    }
}