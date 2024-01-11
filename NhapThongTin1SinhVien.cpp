//
//  NhapThongTin1SinhVien.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

void Nhap(SinhVien &A)
{
    fflush(stdin);
    fgets(A.MASV,10,stdin);
    fflush(stdin);
    fgets(A.HoTen,100,stdin);
    fflush(stdin);
    fgets(A.NgaySinh,12,stdin);
    fflush(stdin);
    cin >> A.GioiTinh;
    cin >> A.DiemToan;
    cin >> A.DiemLy;
    cin >> A.DiemHoa;
    A.DTB = (A.DiemToan+A.DiemLy+A.DiemHoa)/3;
    fflush(stdin);
}
void Xuat(SinhVien A)
{
    int a = 0, b = 0, c = 0;
    while(A.MASV[a] != '\0')
        a++;
    if (A.MASV[a-1]=='\n')
        A.MASV[a-1]= '\0';
    
    while(A.HoTen[b] != '\0')
        b++;
    if (A.HoTen[b-1]=='\n')
        A.HoTen[b-1]= '\0';
    
    while(A.NgaySinh[c] != '\0')
        c++;
    if (A.NgaySinh[c-1]=='\n')
        A.NgaySinh[c-1]= '\0';
    cout<<A.MASV<<"\t"<<A.HoTen<<"\t"<<A.NgaySinh<<"\t"<<A.GioiTinh<<"\t"<<A.DiemToan<<"\t"<<A.DiemLy<<"\t"<<A.DiemHoa<<setprecision(3)<<"\t"<<A.DTB;
}
