//
//  TongDuongCheoChinh.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
#define MAX 100
using namespace std;
void NhapMaTran(double a[][MAX], int &m, int &n)
{
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
}
double VetMaTran(double a[][MAX], int m)
{
    double tong=0;
    for(int i=0;i<m;i++)
        tong+=a[i][i];
    return tong;
}
int main()
{
    int m,n;
    double a[MAX][MAX];
    NhapMaTran(a,m,n);
    cout<<VetMaTran(a,m)<<endl;
    return 0;
}
