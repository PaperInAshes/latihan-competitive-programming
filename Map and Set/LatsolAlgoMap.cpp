#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;
        cin >> N;
    unordered_map<int,int>arr;
    unordered_map<int,int>pertama;
    for (int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        arr[temp]++;
        int frek = arr[temp];
        if (pertama.find(frek)==pertama.end()){
            pertama[frek]=temp;
        }
    }
    int temp2;
        cin >> Q;
    while (Q--){
        cin >> temp2;
        if (pertama.find(temp2)!=pertama.end()){
            cout << pertama[temp2] << endl;
        } else{
            cout << "-1" << endl;
        }
    }
}