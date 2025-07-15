#include<bits/stdc++.h>
using namespace std;

int main(){
    int M;
        cin >> M;
    vector<pair<int,int>>arr(M);
        for (int i = 0; i < M; i++){
            cin >> arr[i].first >> arr[i].second;   
        }
    sort(arr.begin(),arr.end());
    for (int i = 0; i < M; i++){
        cout << "{" << arr[i].first << ", " << arr[i].second << "}\n";
    } 
}       