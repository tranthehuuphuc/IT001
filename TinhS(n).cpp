//
//  TinhS(n).cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <cmath>
using namespace std;
double calculate(int n)
{
    if(n==1) return n;
    return sqrt(n+calculate(n-1));
}
