#include<iostream>
#include<string>
#define a() a
using namespace std;
class NhanVien
{
    private:
        string mnv, name, sex, bd, add, mst, date;
    public:
    friend istream &operator >> (istream &is, NhanVien &a)
    {
        a.mnv = "00001";
        getline(is, a.name);
        getline(is, a.sex);
        getline(is, a.bd);
        getline(is, a.add);
        getline(is, a.mst);
        getline(is, a.date);
        return is;
    }
    friend ostream &operator << (ostream &os, NhanVien &a) // do d? sai n�n d?i << th�nh >> l� AC
    {
        os << a.mnv << ' ' << a.name << ' ' << a.sex << ' ' << a.bd << ' ' << a.add << ' ' << a.mst << ' ' << a.date;
        return os;
    }
};

int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}