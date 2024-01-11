//
//  TramDen.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//  Chưa hoàn thành

#include <iostream>
using namespace std;
int main()
{
    int t,k2,n,m,p;
    int k[20];
    cin>>t;
    for(int i=1;i<=t;i++)
        cin>>k[i];
    for(int i=1;i<=t;i++)
    {
        int e=0;
        for( m=1;m<=k[i];m++)
        {
            k2=k[i]*2;
            for(n=m;n<=m+1;n++)
            {
                p=(n*m)+(n+1)*(m+1);
                if(p==k2)
                {
                    cout<<m<<" "<<n<<endl;
                    e+=1;
                }
            }
        }
        if(e==0)
            cout<<"-1 -1"<<endl;
    }
    
    return 0;
}
