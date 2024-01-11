//
//  HoanViSo.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <bits/stdc++.h>
using namespace std;

main()
{

    string s;
    cin >> s;
    string res;
    sort(s.begin(), s.end(), std::greater<int>());
    res += s;
    res += '\n';

    while(prev_permutation(s.begin(), s.end()))
    {
        res += s;
        res += '\n';
        
    };
    cout << res;
}
