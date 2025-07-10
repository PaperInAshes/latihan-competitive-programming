#include<iostream>
#include<vector>
#include<set>
using namespace std;

void rata(vector<int>::iterator awal, vector<int>::iterator akhir, int N){
    int sum = 0;
    float mean = 0;
    set<int>s;
    for (auto it = awal; it != akhir; it++){
        sum = sum+*it;

        if (*it%5 == 0){
            s.insert(*it);
        }
    }
    mean = 1.0 * (sum/N);
    vector<int>x;
    for (auto it = awal; it != akhir; it++){
        if (*it>mean){
            x.push_back(*it);
        }
    }
    cout << "Nilai di atas rata-rata: ";
    for (int i = 0; i < (int)x.size(); i++){
        cout << x[i] << " ";
    }
    cout << endl << "Kelipatan 5 unik: ";
    for (int y : s){
        cout << y << " ";
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
    rata(awal, akhir, N);
}
