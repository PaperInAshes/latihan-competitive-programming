#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,temp;
        cin >> N;
    unordered_set<int>s;
    vector<int>urut;
    for (int i = 0; i < N; i++){
        cin >> temp;
        if (!s.count(temp)){
            s.insert(temp);
            urut.push_back(temp);
        }
    }
    
    for (auto x : urut){
        cout << x << endl;
    }
}