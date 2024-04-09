#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int q; cin >> q;
    for (int i = 0; i < q; ++i) {
        int x; cin >> x;
        auto it = lower_bound(a.begin(), a.end(), x);
        if (*it == x) {
            cout << "Yes " << it - a.begin() + 1 << endl;
        } else {
            cout << "No " << it - a.begin() + 1 << endl;
        }
    }
    return 0;
}