#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, sum = 0;
    cin >> n >> m;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.rbegin(), arr.rend());

    for (int i = 0; i < n; i++) {
        while (m >= arr[i]) {
            m -= arr[i];
            sum++;
        }
    }

    cout << sum << endl;
}
