#include<iostream>
#include<vector>
#include<set>
using namespace std;

void carigenap(vector<int>::iterator awal, vector<int>::iterator akhir){
    set<int>s;
    for (auto i = awal; i != akhir; i++){
        if (*i%2 == 0){
            s.insert(*i);
        }
    }
    for (int x : s){
        cout << x << " ";
    }
    
}


int main(){
    int N;
        cin >> N;
    vector<int>v(N);

    for (int i = 0; i < N; i++){
        cin >> v[i];
    }
    
    vector<int>::iterator awal = v.begin();
    vector<int>::iterator akhir = v.end();
    carigenap(awal,akhir);
}