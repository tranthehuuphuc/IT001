//
//  DoiMoi.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int64_t a,k,b,m,n,ans=0,nghi1=0,nghi2=0,con=0;
    cin >> a >> k >> b >> m >> n;
    int64_t cut=a+b;
    while(n>=cut)
    {
        ans+=(n/cut);
        n = n%cut + a*(ans/k-nghi1) + b*(ans/m-nghi2);
        nghi1 = ans/k;
        nghi2 = ans/m;
    }
    ans++;
    while(con<n)
    {
        if(ans%k !=0) con+=a;
        if(ans%m !=0) con+=b;
        ans++;
    }
    cout << ans-1;
}
