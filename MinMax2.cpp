//
//  MinMax2.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, max, min;
    cin >> a >>b;
    max = ((a+b)+abs(a-b))/2;
    min = ((a+b)-abs(a-b))/2;
    cout << "max = "<<max<<'\n';
    cout << "min = "<<min;

    return 0;
}
