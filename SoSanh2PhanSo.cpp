//
//  main.cpp
//  So sanh 2 phan so
//
//  Created by Trần Thế Hữu Phúc on 7/2/23.
//

#include <iostream>
using namespace std;
struct PhanSo
{
    int tu, mau;
};
void Nhap(PhanSo &a)
{
    cin>>a.tu>>a.mau;
}
PhanSo Nhap()
{
    PhanSo b;
    cin>>b.tu>>b.mau;
    return b;
}
int SoSanh(PhanSo a, PhanSo b)
{
    double x, y;
    x=1.0*a.tu/a.mau;
    y=1.0*b.tu/b.mau;
    if(x<y) return -1;
    else if(x>y) return 1;
    else return 0;
}
int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
