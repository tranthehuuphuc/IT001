//
//  KhoiPhuc.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;
int a[100006];
ll sum[100006];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int n, c, k; cin >> n >> c >> k;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        if (a[i] > c) --i, --n;
    }

    sort(a+ 1, a + n + 1);

    int cnt = 0;
    for(int i=1, j=1; i<=n; ++i)
    if (i==n || a[i] != a[i + 1]) {
        a[++cnt] = a[i];
        sum[cnt]= sum[cnt - 1] + 1LL * a[i] * (i - j + 1);
        j = i + 1;
    }
ll ans=8e18; n = cnt;
if (n==0) {
        cout<<0;
 return 0;
    }

    if (a[1] > k || a[n] <= c - k) ans = 0;

    for(int i = 2; i <= n; ++i)
    if (a[i] - a[i - 1] > k + 1) {
        ans = 0;
        break;
    }

    if (ans==0) {
        cout<<0;
    return 0;}

    for(int i = 1; i <= n; ++i) {
        if (a[i] <= c - k + 1) {
            int p = upper_bound(a + i, a + n + 1, a[i] + k - 1) - a - 1;
            ans = min(ans, sum[p] - sum[i - 1]);
        }

        if ((i > 1 && a[i] - a[i - 1] > 1 && a[i - 1] <= c - k) || (i == 1 && a[i] > 1))  {
            int l = 1;
            if (i > 1) l = a[i - 1] + 1;

            int p = upper_bound(a + i, a + n + 1, l + k - 1) - a - 1;
            ans = min(ans, sum[p] - sum[i - 1]);
        }

        if (a[i] >= k) {
            int p = lower_bound(a + 1, a + i + 1, a[i] - k + 1) - a;
            ans = min(ans, sum[i] - sum[p - 1]);
        }

        if ((i < n && a[i + 1] - a[i] > 1 && a[i + 1] > k) || (i == n && a[i] < c)) {
            int r = c;
            if (i < n) r = a[i + 1] - 1;

            int p = lower_bound(a + 1, a + i + 1, r - k + 1) - a;
            ans = min(ans, sum[i] - sum[p - 1]);
        }
    }

    cout << ans;
 return 0;
}
