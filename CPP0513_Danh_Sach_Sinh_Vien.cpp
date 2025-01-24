#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>

using namespace std;
struct SinhVien{
	int MaSV;
	string Hoten, Lop, Ngaysinh;
	float gpa;
};
void nhap(SinhVien A[], int n) {
	cin.ignore();
    for (int i = 0; i < n; i++) {
        A[i].MaSV = i + 1;
        getline(cin, A[i].Hoten);
        getline(cin, A[i].Lop);
        getline(cin, A[i].Ngaysinh);
        cin >> A[i].gpa;
        cin.ignore();
    }
}

void in(SinhVien A[], int n) {
	for (int i = 0; i < n; i++){
		if (A[i].Ngaysinh[1] == '/')
	        A[i].Ngaysinh.insert(0, "0");
	    if (A[i].Ngaysinh[4] == '/')
	        A[i].Ngaysinh.insert(3, "0");
	    if (A[i].MaSV > 9)
	    	cout << "B20DCCN0" << A[i].MaSV;
	    else cout << "B20DCCN00" << A[i].MaSV;
		cout << " " << A[i].Hoten << " " << A[i].Lop << " " << A[i].Ngaysinh << " " << fixed << setprecision(2) << A[i].gpa << "\n";
	}
    
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}