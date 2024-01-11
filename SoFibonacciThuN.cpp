//
//  SoFibonacciThuN.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

int a1 = 1, a2 = 1;
        if (x == 1 || x == 2)
            return 1;
    int i = 3, a = 0;
        while (i <= x)
        {
            a = a1 + a2;
            a1 = a2;
            a2 = a;
            i++;
        }
        return a;
    }
