#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void ch(string &name) {
    for (int i = 0; i < name.length(); i++) {
        name[i] = tolower(name[i]);
    }

    if (!name.empty()) {
        name[0] = toupper(name[0]);
    }
    for (int i = 1; i < name.length(); i++) {
        if (name[i-1] == ' ' && name[i] != ' ') {
            name[i] = toupper(name[i]);
        }
    }
}
int coun=0;
class SinhVien {
	private:
	    string Ma, Hoten, Lop, Ngaysinh;
	    float gpa;
	public:
	    SinhVien() {
	        Ma = Hoten = Lop = Ngaysinh  = "";
	        gpa = 0;
	    }
	    friend istream& operator>>(istream&, SinhVien&);
	    friend ostream& operator<<(ostream&, SinhVien);
};
istream& operator>>(istream& mycin, SinhVien& x) {
    coun++;
    x.Ma = "B20DCCN" + string(3 - to_string(coun).length(), '0') + to_string(coun);
    cin.ignore();
    getline(mycin, x.Hoten);
    getline(mycin, x.Lop);
    getline(mycin, x.Ngaysinh);
    cin >> x.gpa;
    ch(x.Hoten);
    if (x.Ngaysinh[1] == '/')x.Ngaysinh.insert(0, "0");
    if (x.Ngaysinh[4] == '/')x.Ngaysinh.insert(3, "0"); 
    return mycin;
}
ostream& operator<<(ostream& mycout, SinhVien x) {

    mycout << x.Ma << " " << x.Hoten << " " << x.Lop << " " << x.Ngaysinh << " " <<fixed<<setprecision(2)<< x.gpa << endl;
    return mycout;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}