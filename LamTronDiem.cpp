//
//  LamTronDiem.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    int n;
    cin>>a;
    cin>>n;
    a=a*n;
    a=round(a);
    a=a/n;
    cout<<setprecision(10)<<a;
    return 0;
}
