#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,temp;
    set<int>arr;
        cin >> N;
    vector<int>x;
    for (int i = 0; i < N; i++){
        cin >> temp;
        arr.insert(abs(temp));
    }
    cout << *arr.begin();

    return 0;
}