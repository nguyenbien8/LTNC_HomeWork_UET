#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q; cin >> q;
    map<string,int> mp;
    int query;
    string s;
    int x;
    while(q--) {    
        cin >> query;
        if (query == 1) {
            cin >> s >> x;
            mp[s] += x;
        }
        else if (query == 2) {
            cin >> s;
            mp.erase(s);
        }
        else if (query == 3) {
            cin >> s;
            auto it = mp.find(s);
            if(it == mp.end()) cout << 0 << endl;
            else cout << mp[s] << endl;
        }
    }
    return 0;
}