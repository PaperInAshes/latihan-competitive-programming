#include<bits/stdc++.h>
using namespace std;
//first ascending second descending

int main(){
    int M,sum = 0;
        cin >> M;
    vector<pair<int,int>>arr(M);
        for (int i = 0; i < M; i++){
            cin >> arr[i].first >> arr[i].second;   
        }

    sort(arr.begin(),arr.end(), [](pair<int,int> a, pair<int,int> b){
        if (a.first != b.first)
            return a.first < b.first;       // elemen pertama ascending
        else
            return a.second > b.second;     // elemen kedua descending
    });
    
    for (int i = 0; i < M; i++){
        if (i = 0 || arr[i].first != arr[i-1].first){
            sum+=arr[i].second;
        }
    } 
    cout << sum;
}       