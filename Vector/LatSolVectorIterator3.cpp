#include<bits/stdc++.h>
using namespace std;

void dup2class(set<int>s1, set<int>s2){
    vector<int>dup;
    set_intersection(s1.begin(), s1.end(),
                     s2.begin(), s2.end(),
                     back_inserter(dup));
    
    cout << "Nilai ganda antar kelas: ";
    for (int x : dup){
        cout << x << " ";
    }
    cout << endl;
    return;
}

void overmean(float mean, vector<int>::iterator awal, vector<int>::iterator akhir){
    cout << "Nilai >= rata-rata: ";
    for (auto it = awal; it != akhir; it++){
        if(*it>=mean){
            cout << *it << " ";
        }
    }   
    return;
}

int main(){
    int M,N,sum = 0;
    float mean = 0;
        cin >> M;
    vector<int>v(M);
    set<int>s1;
        for (int i = 0; i < M; i++){
            cin >> v[i];
            s1.insert(v[i]);
            sum = sum + v[i];
        }
        cin >> N;
    int temp;
    set<int>s2;
        for (int i = 0; i < N; i++){
            cin >> temp; 
            s2.insert(temp);
            sum = sum + temp;
            v.push_back(temp);
        }
    dup2class(s1,s2);
    
    mean = (1.0* sum)/(M+N);
    vector<int>::iterator awal = v.begin();
    vector<int>::iterator akhir = v.end();
    overmean(mean, awal, akhir);
}