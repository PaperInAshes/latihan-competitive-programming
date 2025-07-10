#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,X;
    string y;
        cin >> N;
    map<string,vector<int>>daftar;

        for (int i = 0; i < N; i++){;
            cin >> y >> X;
            daftar[y].push_back(X);
        }
        
        for (auto[nama,nilai] : daftar){
            cout << nama << ": " ;
            for (int nilaii : nilai){
                cout << nilaii << " ";
            }
            cout << endl;
        }
}