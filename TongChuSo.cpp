//
//  TongChuSo.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

void input(int &a){
    std::cin>>a;
}
int TongChuSo(int a){
    int t = 0;
    while(a>0){
        t+=a%10;
        a=a/10;
    }
    return t;
}
