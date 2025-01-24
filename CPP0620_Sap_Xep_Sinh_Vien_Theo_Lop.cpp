#include <iostream>
#include <string>

using namespace std;
class Sinhvien {
  public:
    string id, name, classid, email;
  public:
    friend istream& operator>>(istream& in, Sinhvien& a){
      getline(in, a.id);
      getline(in, a.name);
      getline(in, a.classid);
      getline(in, a.email);
      
      return in;
    }
    friend ostream& operator<<(ostream& out, Sinhvien a){
      out << a.id << " " << a.name << " " << a.classid << " " << a.email << "\n";
      
      return out;
    }
};
void swap(Sinhvien& a, Sinhvien& b){
  Sinhvien c = a;
  a = b;
  b = c;
}
void sapxep(Sinhvien ds[], int n){
  for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
      if(ds[i].classid > ds[j].classid) swap(ds[i], ds[j]);
      else if(ds[i].classid == ds[j].classid){
      	if(ds[i].id > ds[j].id) swap(ds[i], ds[j]);
	  }
    }
  }
}
int main(){
  int n;
  cin >> n;
  Sinhvien ds[n];
  cin.ignore();
  for(int i = 0; i < n; i++) cin >> ds[i];
  sapxep(ds, n);
  for(int i = 0; i < n; i++) cout << ds[i];
  return 0;
}