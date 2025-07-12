#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,Q,L,R,temp;
        cin >> N >> Q;
    vector<int>arr;
        for (int i = 0; i < N; i++){
            cin >> temp;
            if ((temp%2)==0){
                arr.push_back(temp);
            }
        }
    sort(arr.begin(),arr.end());
        for (int i = 0; i < Q; i++){
            cin >> L >> R;
            auto hasil = (upper_bound(arr.begin(),arr.end(),R) - lower_bound(arr.begin(),arr.end(),L));
            cout << hasil << endl;
        }
}