//
//  main.cpp
//  Cac tong huu han
//
//  Created by Trần Thế Hữu Phúc on 5/2/23.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double S1(int n)
{
    double s1=1;
    if(n>1){
        for(int i=2;i<=n;i++)
            s1+=pow(i, i);
    }
    return s1;
}
double S2(int n)
{
    double temp=1, s2=1;
    if(n>1){
        for(int i=2;i<=n;i++){
            temp*=i;
            s2+=temp;
        }
    }
    return s2;
}
double S3(int n)
{
    double temp=1, s3=1;
    if(n>1){
        for(int i=2;i<=n;i++){
            temp+=i;
            s3+=1/temp;
        }
    }
    return s3;
}
int main()
{
    int n;
    cin>>n;
    cout<<S1(n)<<endl<<endl;
    cout<<S2(n)<<endl<<endl;
    cout<<S3(n)<<endl;
    return 0;
}
