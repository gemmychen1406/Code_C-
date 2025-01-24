#include <iostream>
#include <string>

using namespace std;
int cnt = 1;
class NhanVien {
  public:
    string id, name, sex, birth, add, day;
    long long  tid;
  public:
    friend istream& operator>>(istream& in, NhanVien& a){
      in.ignore();
      a.id = string(5 - to_string(cnt).length(), '0') + to_string(cnt);
      cnt++;
      getline(in, a.name);
      getline(in, a.sex);
      getline(in, a.birth);
      getline(in, a.add);
      in >> a.tid;
      in.ignore();
      in >> a.day;
      
      return in;
    }
    friend ostream& operator<<(ostream& out, NhanVien a){
      out << a.id << " " << a.name << " " << a.sex << " " << a.birth << " " << a.add << " " << a.tid << " " << a.day << "\n";
      
      return out;
    }
};
void swap(NhanVien& a, NhanVien& b){
  NhanVien c = a;
  a = b;
  b = c;
}
void sapxep(NhanVien ds[], int n){
  for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
      string x1 = ds[i].birth.substr(6);
      string x2 = ds[j].birth.substr(6);
      if (x1 > x2) {
        swap(ds[i], ds[j]);
        continue;
      }
      else if(x1 < x2) continue;
      else {
        x1 = ds[i].birth.substr(0, 2);
        x2 = ds[j].birth.substr(0, 2);
        if (x1 > x2) {
          swap(ds[i], ds[j]);
          continue;
        }
        else if(x1 < x2) continue;
        else {
          x1 = ds[i].birth.substr(3, 2);
          x2 = ds[j].birth.substr(3, 2);
          if (x1 > x2) {
            swap(ds[i], ds[j]);
            continue;
          }
        }
      }
    }
  }
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}