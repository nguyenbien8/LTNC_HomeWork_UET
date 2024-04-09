#include <bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    // Complete this function 
    cout << *a + *b << endl;
    cout << abs(*a - *b) << endl;
}

int main() {
    int a, b;
    int *pa = &a;
    int *pb = &b;
    cin >> a >> b;
    update(pa, pb);
    return 0;
}