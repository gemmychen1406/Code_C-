#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool nt( int n){
        if(n == 0 || n==1 ) return 0;
        for(int i = 2; i<= sqrt(n); i++){
            if(n % i == 0 ) return 0;}
    return 1;
}
int tcs(long long n){
    long long res = n;
    int sum=0;
    while(res !=0){
        sum += res % 10;
        res/=10;
    }
    return sum;
}
int main() {
	int t;
	cin >> t;
	while(t--){
	    long long n, s=0 ; cin >> n;
	            long long tmp=n;
	    for(long long i=2; i<= sqrt(tmp); i++){
	
	        if(nt(i) && tmp%i==0){
	            while( tmp %i==0){
	                s += tcs(i);
	                tmp /=i;
	            }
	        }
	    }
	    if(tmp >1) s+= tcs(tmp);
	    if(s== tcs(n) && !nt(n)) cout << "YES";
	    else cout << "NO";
	    cout << "\n";
    }
    return 0;
}
