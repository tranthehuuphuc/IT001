//
//  main.cpp
//  Do_Tre_Cua_So
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>

#include <iostream>
using namespace std;
int main() {
   int32_t n;
   int32_t t=0;
   cin>>n;
   while(n!=0){
    int32_t c;
    c=n%10;
    if(c!=0)
     break;
    else
     n=n/10;
   }
   while(n!=0){
    int b;
    b=n%10;
    n/=10;
    if(b==0)
     t+=1;
   }
   cout<<t;
   return 0;
}
