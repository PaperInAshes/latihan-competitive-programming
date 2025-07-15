#include<bits/stdc++.h>
using namespace std;

int main(){
    int M, sum = 0,max=-1, index=0;
        cin >> M;
    vector<pair<int,pair<int,int>>>arr(M);
        for (int i = 0; i < M; i++){
            cin >> arr[i].first >> arr[i].second.first >> arr[i].second.second; 
        }
    sort(arr.begin(),arr.end());
    for (int i = 0; i < M; i++){
        if (arr[i].first>max){
            sum += arr[i].second.second;
            max = arr[i].second.first;
        }
    }
    
    cout << sum;
}       

