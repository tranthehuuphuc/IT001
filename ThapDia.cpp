//
//  ThapDia.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
bool tick[1000006];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int n; cin >> n;
    int curr = n;
    while (n--) {
        int a; cin >> a; tick[a] = true;
        while (curr > 0 && tick[curr]) cout << curr-- << ' ';
        cout << '\n';
    }

    return 0;
}
