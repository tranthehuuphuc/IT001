//
//  BaiKiemTra.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>

using namespace std;

int main()
{
    int64_t n,k,p,q,a,b,h,c;
    cin>> n>>k>>p>>q;
    a= (2*(p-1))+q;
    if (k==n)
    {
        cout<< "-1";
        return 0;
    }
    /*if ((k>n/2) && (k>= a > (n-k)))
    {
        cout<< "-1";
        return 0;
    }
    else
    {*/
    if (a<=k)
        b=a+k;
    else
        b= a-k;
    if (b>n)
        cout << "-1";
    else
    {
    if (b%2==0)
    {
        h=b/2;
        c=2;
    }
    else
    {
        h=(b+1)/2;
        c=1;
    }
    cout << h<< " "<<c;
    }
    return 0;
}
