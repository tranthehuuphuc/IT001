//
//  TongUocChan.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

int Input()
{
    int n;
    cin>>n;
    return n;
}
int sum_even_divisor(int n)
{
    int t=0;
    for(int i=2;i<=n;i+=2){
        if(n%i==0)
            t+=i;
    }
    if(t==0)
        return t=-1;
    else
     return t;
}
