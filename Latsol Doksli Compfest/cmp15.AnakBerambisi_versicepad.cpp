#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, temp, mini = INT_MAX; 
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        temp = abs(temp);
        if (temp < mini) {
            mini = temp;
        }
    }
    cout << mini << '\n';
}
