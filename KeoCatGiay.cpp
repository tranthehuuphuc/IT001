//
//  KeoCatGiay.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long m, n, ans = 0;
    cin >> n >> m;
    ans = (n + m) * (n - 1) - (2 * n + 2) * (n - 1) / 2;
    cout << ans;
    return 0;
}
