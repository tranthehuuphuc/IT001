//
//  Upper_To_Lower.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    int l=a.length();
    for(int i=0;i<l;i++){
        if(a[i]>=97&&a[i]<=122){
        a[i]=a[i]-32;
        }
        else{
            if(a[i]<=90&&a[i]>=65)
                a[i]=a[i]+32;
        }
    }
    cout<<a;
    return 0;
}
