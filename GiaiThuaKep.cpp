//
//  GiaiThuaKep.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
using namespace std;
int64_t GiaiThuaKep(int n)
{
    int64_t t=1;
    if(n%2==0){
        for(int i=2;i<=n;i+=2)
            t*=i;
    }
    else{
        for(int i=3;i<=n;i+=2)
            t*=i;
    }
    return t;
}
int main()
{
    int n;
    cin>>n;
    cout<<GiaiThuaKep(n);
    return 0;
}
