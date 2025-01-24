#include <iostream>

using namespace std;
int cnt = 1;
class NhanVien {
  private:
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

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}