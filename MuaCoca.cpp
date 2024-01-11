//
//  main.cpp
//  Mua_Coca
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int dem=0;
    for(int i=0; i<s.size()-1; i++)
        if(s[i]!=s[i+1])
            dem++;
    if(dem%2==0)
        cout<<"Lose";
    else cout<<"Win";
}
