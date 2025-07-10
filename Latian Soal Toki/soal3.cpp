#include<bits/stdc++.h>
using namespace std;

int main(){
    int M,Q;
        cin >> M;
    vector<int>cek(M);
    unordered_map<int,int>arr;

    for (int i = 0; i < M; i++){
        cin >> cek[i];
        if (arr.find(cek[i]) == arr.end()){
            arr[cek[i]]=i;
        }
    }
    
        cin >> Q;
    while (Q--){
        int temp;
            cin >> temp;
        if (arr.find(temp)!=arr.end()){
            cout << arr[temp] << endl;
        } else{
            cout << "-1" << endl;
        }
    }
}