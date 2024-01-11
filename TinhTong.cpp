//
//  TinhTong.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
using namespace std;
int main()
{
    int x,y,k,n,n1,e=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>x;
    n1=n-1;
    for(int j=0;j<n1;j++){
        y=j+1;
        for(k=y;k<=n1;k++){
            if(a[j]+a[k]==x){
                e+=1;
            }
        }
    }
    if(e==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
