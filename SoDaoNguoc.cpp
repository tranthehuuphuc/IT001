//
//  SoDaoNguoc.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

using namespace std;
int reverse(int n)
{
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
