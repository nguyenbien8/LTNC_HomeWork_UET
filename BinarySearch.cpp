#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int a[], int n, int x){
    int left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(a[mid] == x) return true;
        else if(a[mid] < x) left = mid + 1;
        else if(a[mid] > x) right = mid - 1;
    }
    return false;
}

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int x; cin >> x;
    if(binarySearch(a, n, x)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
