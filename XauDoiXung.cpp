//
//  XauDoiXung.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s,s1;
    getline(cin,s);
    int l=s.length()-1;
    for(int i=l;i>=0;i--)
    s1=s1+s[i];
    if(s==s1)
    cout<<"YES";
    else cout<<"NO";
    return 0;
}
