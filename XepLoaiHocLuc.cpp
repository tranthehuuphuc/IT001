//
//  XepLoaiHocLuc.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double t,l,h,DTB;
    cin>>t>>l>>h;
    DTB=(t+l+h)/3;
    cout<<"DTB = "<<setprecision(2)<<fixed<<DTB<<endl;
    if(DTB>=9&&DTB<=10)
        cout<<"Loai: XUAT SAC"<<endl;
    if(DTB>=8&&DTB<9)
        cout<<"Loai: GIOI"<<endl;
    if(DTB>=7&&DTB<8)
        cout<<"Loai: KHA"<<endl;
    if(DTB>=6&&DTB<7)
        cout<<"Loai: TB KHA"<<endl;
    if(DTB>=5&&DTB<6)
        cout<<"Loai: TB"<<endl;
    if(DTB>=4&&DTB<5)
        cout<<"Loai: YEU"<<endl;
    if(DTB>=0&&DTB<4)
        cout<<"Loai: KEM"<<endl;
    return 0;
}
