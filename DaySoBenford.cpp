//
//  DaySoBenford.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

void Nhapmang(int a[], int &n)
{
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
bool isBenford(int a[], int n){
    int b[MAX], temp, m, k; m=k=0;
    for(int i=0;i<n;i++){
        do{
            temp=a[i]%10;
            b[i]=temp;
            a[i]/=10;
        } while(a[i]>0);
    }
    for(int i=0;i<n;i++){
        if(b[i]==1) m++;
        if(b[i]==4) k++;
    }
    if(m==3&&k==1)
        return true;
    else
        return false;
}
