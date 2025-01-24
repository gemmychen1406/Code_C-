#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
class SinhVien {
	public: 
		string ma, name, lop, email;
		friend istream& operator>> (istream& in, SinhVien& a){
			getline(in, a.ma);
			getline(in, a.name);
			getline(in, a.lop);
			getline(in, a.email);
			return in;
		}
		friend ostream& operator<< (ostream& out, SinhVien a){
			out << a.ma << " " << a.name << " " << a.lop << " " << a.email << "\n";
			return out;
		}
};
int main(){
	int n;
	cin >> n;
	scanf("\n");
	SinhVien ds[n];
	for (int i = 0; i < n; i++) cin >> ds[i];
	int q;
	cin >> q;
	while(q--){
		scanf("\n");
		string lp;
		cin >> lp;
		cout << "DANH SACH SINH VIEN LOP " << lp << ":\n";
		for (int i = 0; i < n; i++){
			if (lp == ds[i].lop) cout << ds[i];
		}
	}
}
