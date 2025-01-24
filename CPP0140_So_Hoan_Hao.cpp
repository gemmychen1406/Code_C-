#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool nt( long long n){
        if(n == 0 || n==1 ) return false;
        else if(n==2 || n==3) return true;
        else if(n%2==0 || n%3==0) return false;
        else {
            for(int i = 5; i<= sqrt(n); i+=6){
                if(n % i == 0 || n % (i+2) ==0 ) return false;
                }}
    return true;
}
bool so_hoan_hao( long long n){
    for(int i = 2; i <= 33; i++){
        if(nt(i)){
            long long tmp1= pow(2, i) -1;
            if(nt(tmp1)){
                long long tmp2 = pow(2, i-1);
                if(tmp1 * tmp2 == n) return 1;
                }
            }
        }

    return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n ; cin >> n;
	    if(so_hoan_hao(n)) cout << 1;
	    else cout << 0;	   
		cout << "\n";
	}
}
