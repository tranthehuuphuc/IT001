//
//  Fibonacci.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, c, n;
    a = b = 1;
    cin >> n;
    if(n<=2) {
    c=1;
    }
    else {
        for(int x = 3 ; x <= n; x++ ) {
             c = a + b;
            a = b;
            b = c;
        }
         }
    cout << c;
    return 0;
}
