//
//  main.cpp
//  SoNguyenToTrongMang
//
//  Created by Trần Thế Hữu Phúc on 1/10/23.
//

#include <iostream>
#include <cmath>
#define MAX 100000
using namespace std;
int A[MAX], n, j, dem=0;
void Nhapmang(int A[MAX], int &n)
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>A[i];
}
bool isPrime(int j)
{
    if(j<2) return false;
    int c=sqrt(j);
    for(int i=2;i<=c;i++){
        if(j%i==0) return false;
    }
    return true;
}
int main()
{
    Nhapmang(A,n);
    for(int i=0;i<n;i++){
        if(isPrime(A[i])==true){
            cout<<A[i]<<"\t";
            dem++;
        }
    }
    if(dem==0) cout<<"0"<<endl;
    cout<<"Created by Trần Thế Hữu Phúc on 1/10/23."<<endl;
    return 0;
}
