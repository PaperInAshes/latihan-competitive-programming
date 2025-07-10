#include <bits/stdc++.h>
using namespace std;
int main(){
    int M,N;
        cin >> M >> N;
    int arr[M];
        for (int i = 0; i < M; i++){
            cin >> arr[i];
        }
    bool x = false;
        for (int i = 0; i < M; i++){
            if (N == arr[i]){
                cout << i;
                x = true;
                break;
            } 
        }
        if (!x){
            cout << "-1";
        }
    }