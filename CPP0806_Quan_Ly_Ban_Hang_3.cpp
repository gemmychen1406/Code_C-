#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<fstream>
using namespace std;
int cntkh = 0, cntmh = 0, cnthd = 0;
class KH{
	public:
		string ma, ten, dc;
		friend ostream& operator<< (ostream& out, KH a){
			out << a.ten << " " << a.dc << " ";
			return out;
		}
} kh[100];
class MH{
	public:
		string code, name, dv;
		long long nhap, xuat;
		friend ostream& operator<< (ostream& out, MH a){
			out << a.name << " " << a.dv << " " << a.nhap << " " << a.xuat << " ";
			return out;
		}
} mh[100];
class KhachHang {
	public:
		string makh, tenkh, gtkh, nskh, dckh;
	public:
		friend istream& operator>> (istream& in, KhachHang& a){
			if(cntkh == 0) in.ignore();
			cntkh++;
			a.makh = "KH" + string(3 - to_string(cntkh).length(), '0') + to_string(cntkh);
			getline(in, a.tenkh);
			getline(in, a.gtkh);
			getline(in, a.nskh);
			getline(in, a.dckh);
			
			kh[cntkh - 1].ma = a.makh;
			kh[cntkh - 1].ten = a.tenkh;
			kh[cntkh - 1].dc = a.dckh;
			return in;
		}
		
};
class MatHang {
	public:
		string mamh, tenmh, dvmh;
		long long gm, gb;
	public:
		friend istream& operator>> (istream& in, MatHang& a){
			in.ignore();
			cntmh++;
			a.mamh = "MH" + string(3 - to_string(cntmh).length(), '0') + to_string(cntmh);
			getline(in, a.tenmh);
			getline(in, a.dvmh);
			in >> a.gm >> a.gb;
			
			mh[cntmh - 1].code = a.mamh;
			mh[cntmh - 1].name = a.tenmh;
			mh[cntmh - 1].dv = a.dvmh;
			mh[cntmh - 1].nhap = a.gm;
			mh[cntmh - 1].xuat = a.gb;
			return in;
		} 
		
};
class HoaDon {
	private:
		string mahd, ngmua, mathang;
		long long sl, tong;
	public:
		friend istream& operator>> (istream& in, HoaDon& a){
			in.ignore();
			cnthd++;
			a.mahd = "HD" + string(3 - to_string(cnthd).length(), '0') + to_string(cnthd);
			in >> a.ngmua >> a.mathang >> a.sl;
			return in;
		}
		friend ostream& operator<< (ostream& out, HoaDon a){
			out << a.mahd << " ";
			for (int i = 0; i < cntkh; i++){
				if (a.ngmua == kh[i].ma){
					out << kh[i];
					break;
				}
			}
			for (int i = 0; i < cntmh; i++){
				if (a.mathang == mh[i].code){
					out << mh[i];
					a.tong = a.sl * mh[i].xuat;
					break;
				}
			}
			out << a.sl << " " << a.tong << "\n";
			return out;
		}
};
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    ifstream input("KH.in");
	input >> N;
	for(i=0;i<N;i++) input >> dskh[i];
    ifstream ip("MH.in");
    ip >> M;
    for(i=0;i<M;i++) ip >> dsmh[i];
    ifstream inp("HD.in");
    inp >> K;
    for(i=0;i<K;i++) inp >> dshd[i];
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}