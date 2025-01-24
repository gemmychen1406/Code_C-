#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class SinhVien {
public:
    string msv, name, birth, lop;
    double gpa;
public:
    SinhVien() {
    }
    void nhap() {
	    msv = "B20DCCN001";
	    getline(cin, name);
	    getline(cin, lop);
	    getline(cin, birth);
	    cin >> gpa;
	    if (birth[1] == '/')birth.insert(0, "0");
	    if (birth[4] == '/')birth.insert(3, "0");
	}
	void xuat() {
	    cout << msv << " " << name << " " << lop << " " << birth << " " << fixed << setprecision(2) << gpa;
	}
};

#define a() a;
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}