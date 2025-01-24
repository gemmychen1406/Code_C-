#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<sstream>
using namespace std;
int cnt = 0;
class gv {
	public:
		string ma, name, lastname, nganh;
		friend istream& operator>> (istream& in, gv& a){
			cnt++;
			a.ma = "GV" + string(2 - to_string(cnt).length(), '0') + to_string(cnt);
			getline(in, a.name);
			stringstream str(a.name);
			string x = " ", y;
			while(str >> y) a.lastname = y;
			getline(in, a.nganh);
			stringstream ng(a.nganh);
			a.nganh.clear();
			while(ng >> y)	x += toupper(y[0]);
			a.nganh = x;
			return in;
		}
		friend ostream& operator<< (ostream& out, gv a){
			out << a.ma << " " << a.name << a.nganh << "\n";
			return out;
		}
};
void sapxep(gv ds[], int n){
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ds[i].lastname > ds[j].lastname) swap(ds[i], ds[j]);
			else if (ds[i].lastname == ds[j].lastname){
				if (ds[i].ma > ds[j].ma) swap(ds[i], ds[j]);
			}
		}
	}
}
int main(){
	int n;
	cin >> n;
	scanf("\n");
	gv ds[n];
	for (int i = 0; i < n; i++) cin >> ds[i];
	sapxep(ds, n);
	for (int i = 0; i < n; i++) cout << ds[i];
}
