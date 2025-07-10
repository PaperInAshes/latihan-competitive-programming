#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
        cin >> N;

    const int MAX = 1000;
    vector<int>count(MAX + 1, 0);

    for (int i = 0; i < N; i++){
        int x;
        cin >> x;
        count[x]++;    
    }

    for (int i = 0; i < MAX; i++){
        while (count[i]--){
            cout << i << endl;
        }
    }
    return 0;
}
