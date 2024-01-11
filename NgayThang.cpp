//
//  NgayThang.cpp
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
string s;
vector<char>C;
vector<string>ans;
bool is_valid(int day, int month, int year) {
    if (min({day, month, year}) <= 0) return false;
    if (month > 12) return false;
    if (month == 2) {
        if (year % 3328 == 0) return day <= 30;
        if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) return day<=29;
        return day<=28;
    }

    if (month == 4 || month == 6 || month == 9 || month == 11) return day <= 30;
return day <= 31;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    cin>>s;
    for(char c: s) C.push_back(c);
    cin>>s;
    for(char c: s) C.push_back(c);

    cin >> s;
    for(char c: s) C.push_back(c);

    sort(C.begin(), C.end());

    do {
        int year = (C[0] - '0') * 1000 + (C[1] - '0') * 100 + (C[2] - '0') * 10 + (C[3] - '0');
        int month = (C[4] - '0') * 10 + (C[5] - '0');
        int day = (C[6] - '0') * 10 + (C[7] - '0');

        if (is_valid(day, month, year)) {
            string t = "";
            t.push_back(C[0]);
            t.push_back(C[1]);
            t.push_back(C[2]);
            t.push_back(C[3]);
            t.push_back(' ');
            t.push_back(C[4]);
            t.push_back(C[5]);
            t.push_back(' ');
            t.push_back(C[6]);
            t.push_back(C[7]);
            ans.push_back(t);
        }
    } while (next_permutation(C.begin(), C.end()));

    cout << ans.size() << '\n';
    for(string s: ans) cout << s << '\n';
 return 0;
}
