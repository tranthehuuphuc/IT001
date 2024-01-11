//
//  main.cpp
//  GiaTriLonNhatCuaMang
//
//  Created by Trần Thế Hữu Phúc on 1/10/23.
//

#include <iostream>
#define MAX 1000000
using namespace std;
int i,j,n,A[MAX],t=0;
void NhapMang(int A[MAX], int &n)
{
    cin>>n;
    for(i=0;i<n;i++){
        cin>>A[i];
    }
}
void Max(int A[MAX], int n)
{
    int max=A[0];
    for(i=1;i<n;i++){
        if(A[i]>max) max=A[i];
    }
    cout<<max<<endl;
    for(j=0;j<n;j++){
        if(A[j]==max) t++;
    }
    cout<<t;
}
int main()
{
    NhapMang(A,n);
    Max(A,n);
    return 0;
}
