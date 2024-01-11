//
//  main.cpp
//  MaTranChuyenVi
//
//  Created by Trần Thế Hữu Phúc on 1/10/23.
//

#include <iostream>
#define MAX 100
using namespace std;
int i,j;
void NhapMaTran(double A[MAX][MAX], int &m, int &n)
{
    cin>>m>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cin>>A[i][j];
    }
}
void MaTranChuyenVi(double A[][MAX], double B[][MAX], int m, int n)
{
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            B[j][i]=A[i][j];
        }
    }
}
int main()
{
    double A[MAX][MAX], B[MAX][MAX];
    int m,n,i,j,e=0;
    NhapMaTran(A,m,n);
    MaTranChuyenVi(A,B,m,n);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<B[i][j]<<"\t"; e++;
            if(e==m){
                cout<<endl;
                e=0;
            }
        }
    }
    return 0;
}
