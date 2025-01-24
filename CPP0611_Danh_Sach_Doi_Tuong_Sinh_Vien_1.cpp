#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

class SinhVien {
	private:
	    string Ma, Hoten, Lop, Ngaysinh;
	    float gpa;
	public:
	    SinhVien() {
	        Ma = Hoten = Lop = Ngaysinh  = "";
	        gpa = 0;
	    }
	    static int coun;
	    friend istream& operator>>(istream&, SinhVien&);
	    friend ostream& operator<<(ostream&, SinhVien);
};
int SinhVien :: coun=0;
istream& operator>>(istream& mycin, SinhVien& x) {
    SinhVien :: coun++;
    x.Ma = "B20DCCN" + string(3 - to_string(SinhVien :: coun).length(), '0') + to_string(SinhVien :: coun);
    cin.ignore();
    getline(mycin, x.Hoten);
    getline(mycin, x.Lop);
    getline(mycin, x.Ngaysinh);
    cin >> x.gpa;
    if (x.Ngaysinh[1] == '/')x.Ngaysinh.insert(0, "0");
    if (x.Ngaysinh[4] == '/')x.Ngaysinh.insert(3, "0"); 
    return mycin;
}
ostream& operator<<(ostream& mycout, SinhVien x) {

    mycout << x.Ma << " " << x.Hoten << " " << x.Lop << " " << x.Ngaysinh << " " <<fixed<<setprecision(2)<< x.gpa << endl;
    return mycout;
}
int main(){
	ifstream file;
	file.open("SV.in");
    SinhVien ds[50];
    int N, i;
    file >> N;
    for(i=0;i<N;i++){
        file >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    file.close();
    return 0;
}