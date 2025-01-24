#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		double a,b,c,d;
		cin >> a >> b >> c >> d;
		cout << setprecision(4) << fixed << sqrt((a - c) * (a - c) + (b - d) * (b - d)) << "\n";
	}
}
