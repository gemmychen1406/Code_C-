#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class SinhVien {
private:
    string msv, name, lop, birth;
    float gpa;
public:
    SinhVien() {
        msv = name = lop = birth = "";
        gpa = 0;
    }
    friend istream &operator >> (istream &is, SinhVien &a)
    {
    	a.msv = "B20DCCN001";
        getline(cin, a.name);
	    getline(cin, a.lop);
	    getline(cin, a.birth);
	    cin >> a.gpa;
	    if (a.birth[1] == '/')a.birth.insert(0, "0");
	    if (a.birth[4] == '/')a.birth.insert(3, "0");
        return is;
    }
    friend ostream &operator << (ostream &os, SinhVien &a)
    {
        os << a.msv << ' ' << a.name << ' ' << a.lop << ' ' << a.birth << ' ' << setprecision(2) << fixed << a.gpa;
        return os;
    }
};



int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}