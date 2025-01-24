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
	    stringstream ss(a.name);
		string res = "", word;
		while(ss >> word){
			res += toupper(word[0]);
			for(int j = 1; j < word.size(); j++){
				res += tolower(word[j]);
			}
			res += " ";
		}
		res.pop_back();
		a.name = res;
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


#define a() a
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}