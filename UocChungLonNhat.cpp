//
//  UocChungLonNhat.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

using namespace std;
int gcd(int m, int n)
{
    if(n==0) return m;
    if(m%n==0) return n;
    return gcd(n,m%n);
}
