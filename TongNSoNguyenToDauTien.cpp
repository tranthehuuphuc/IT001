//
//  TongNSoNguyenToDauTien.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

bool isPrime(int i)
{
    int s=sqrt(i);
    for(int j=2;j<=s;j++){
        if(i%j==0) return false;
    }
    return true;
}
int main()
{
    int n, i=2, dem=0, tong=0;
    cin>>n;
    while(n<1||n>50){
        cout<<"Gia tri vua nhap la "<<n<<", khong hop le. Vui long nhap lai."<<endl;
        cin>>n;
    }
    if(n==1) tong=2;
    else{
        while(dem<n){
            if(isPrime(i)==true){
                tong+=i;
                dem++;
            }
            i++;
        }
    }
    cout<<"Tong "<<n<<" so nguyen to dau tien la: "<<tong<<endl;
    return 0;
}
