//
//  MaSo.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

int cnt[26];
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    cin >> s; int n = s.size();

    ll ans = 0;
    for(int i = 0; i < n; ++i) ans += i - cnt[s[i] - 'a']++;

    for(int i = 0; i < 26; ++i)
    if (cnt[i] > 1) {
        ++ans;
        break;
    }

    cout << ans;

    return 0;
}
