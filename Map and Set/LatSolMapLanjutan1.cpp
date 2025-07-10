#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char, int>filter;
    string N;
        cin >> N;
        for (auto i = 0; i < N.length(); i++){
            char M = N[i];
            filter[M]++;
        }

        for (auto [chara,sum] : filter){
            cout << chara << ": " << sum << endl;
        }
        
}