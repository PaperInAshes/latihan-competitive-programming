#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 4, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;

    int low = lower_bound(arr, arr + n, x) - arr;
    int up = upper_bound(arr, arr + n, x) - arr;

    int count = up - low;

    cout << "Jumlah kemunculan angka " << x << ": " << count << endl;
    return 0;
}
