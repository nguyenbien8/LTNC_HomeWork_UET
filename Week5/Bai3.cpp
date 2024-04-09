#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    vector<int> v;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        v.push_back(x);
    } 
    int a, b, c;
    cin >> a >> b >> c;
    v.erase(v.begin() + a - 1);
    v.erase(v.begin()+ b - 1, v.begin() + c - 1);
    cout << v.size() << endl;
    for(auto i : v){
        cout << i << " ";
    }
    return 0;
}
