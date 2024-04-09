#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> se;
    int q; cin >> q;
    for(int i=0; i < q; i++){
        int qu; int x;
        cin >> qu; cin>>x;
        switch(qu){
        case 1:
            se.insert(x);
            break;
        case 2:
            se.erase(x);
            break;
        case 3:
            auto it = se.find(x);
            if(it != se.end()) cout << "Yes" << endl;
            else cout << "No" << endl;
            break;
        }
    }
    return 0;
}