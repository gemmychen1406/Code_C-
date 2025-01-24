#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>
using namespace std;
int cnt = 0;
class SinhVien {
	public:
		string name, ma, lop, ns;
		float gpa;
		friend istream& operator>> (istream& in, SinhVien& a){
			scanf("\n");
			cnt++;
			getline(in, a.name);
			stringstream str(a.name);
			a.name.clear();
			string x = "", word;
			while(str >> word) {
				int l = word.length();
				for (int i = 0; i < l; i++){
					if (i == 0) word[i] = toupper(word[i]);
					else word[i] = tolower(word[i]);
				}
				x = x + " "+ word;
			}
			a.name = x;
			getline(in, a.lop);
			getline(in, a.ns);
			if (a.ns[2] != '/') a.ns = "0" + a.ns;
			if (a.ns[5] != '/') a.ns.insert(a.ns.begin() + 3, '0');
			cin >> a.gpa;
			a.ma = "B20DCCN" + string(3 - to_string(cnt).length(), '0') + to_string(cnt);
			return in;
		}
		friend ostream& operator<< (ostream& out, SinhVien a){
			out << a.ma << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << "\n";
			
			return out;
		}
};
void sapxep(SinhVien ds[], int n){
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if (ds[i].gpa < ds[j].gpa) swap(ds[i], ds[j]);
		}
	}
}
int main() {
    SinhVien ds[50];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> ds[i];
    }
    sapxep(ds, N);
    for (int i = 0; i < N; i++) {
        cout << ds[i];
    }
    return 0;
}
