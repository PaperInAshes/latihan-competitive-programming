#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,temp;
        cin >> m;
        for (int i = 0; i < m; i++){
            cin >> temp;
            if ((temp&1)==0){
                cout << "ganjil\n";
            } else cout << "genap\n";
        }
}