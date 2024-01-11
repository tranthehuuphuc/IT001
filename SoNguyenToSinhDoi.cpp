//
//  SoNguyenToSinhDoi.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
#include <math.h>
using namespace std;
bool IsPrime(int m)
{
    int m2,i;
    m2=sqrt(m);
    if(m%2==0)
     return false;
    for(i=3;i<=m2;i++){
     if(m%i==0)
      return false;
    }
    return true;
}
int main()
{
    int n,x,d=0;
    cin>>n;
    for(x=3;x<(n-2);x+=2){
        if(IsPrime(x)&&IsPrime(x+2)){
            cout<<x<<", "<<(x+2)<<endl;
            d+=1;
        }
    }
    cout<<"Tong: "<<d<<" cap so sinh doi < "<<n;
    return 0;
}
