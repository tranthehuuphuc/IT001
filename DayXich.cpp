//
//  main.cpp
//  Day_Xich
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
using namespace std;
int main()
{
    int64_t d,n,r;
    int64_t L;
    cin>>d>>n>>r;
    L=2*n*(d+r)-2*d*(n-1);
    cout<<L;
    return 0;
}
