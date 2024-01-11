//
//  main.cpp
//  Area_Of_Triangle
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c,p,S;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2f",S);
    return 0;
}
