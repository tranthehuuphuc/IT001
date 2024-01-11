//
//  GiengMaThuat.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
using namespace std;

void main() {
    
    int a, b, n, v = 0;
    cin >> a >> b >> n;
    if(n > 0) {
        for(int i = 1; i <= n; i++) {
            v = v + ((a + i - 1) * (b + i - 1));
        }
        cout << v;
    } else {
        v = 0;
    }
    
}
