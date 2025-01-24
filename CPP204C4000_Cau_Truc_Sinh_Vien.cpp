#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>

using namespace std;
struct SinhVien{
	string MaSV, Hoten, Lop, Ngaysinh;
	float gpa;
};
void nhapThongTinSV(SinhVien& A) {
    getline(cin, A.Hoten);
    cin >> A.Lop;
    cin.ignore();
    cin >> A.Ngaysinh;
    cin.ignore();
    cin >> A.gpa;
}
void inThongTinSV(SinhVien A) {
    if (A.Ngaysinh[1] == '/')
        A.Ngaysinh.insert(0, "0");
    if (A.Ngaysinh[4] == '/')
        A.Ngaysinh.insert(3, "0");
   
    cout << "N20DCCN001\t" << A.Hoten << "\t" << A.Lop;
	cout << "\t" << A.Ngaysinh << "\t" << fixed << setprecision(2) << A.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}