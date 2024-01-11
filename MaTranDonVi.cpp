//
//  MaTranDonVi.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
#include <stdio.h>
#define MAXR 100
#define MAXC 100
void NhapMaTran(int a[][MAXC], int &n)
{
    std::cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            std::cin>>a[i][j];
    }
}
bool isMaTranDonVi(int a[][MAXC], int n)
{
    int p,q; p=q=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(a[i][j]==1)
                    p+=1;
            }
            else{
                if(a[i][j]==0)
                    q+=1;
            }
        }
    }
    if(p==n&&q==n*n-n) return true;
    else return false;
}
