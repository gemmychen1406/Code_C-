#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int tong(int n){
	int sum = 0;
	while(n){
		sum += (n % 10);
		n /= 10;
	}
	if (sum >= 10){
		return tong(sum);
	}
	else return sum;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;	   
		cout << tong(n) << "\n";
	}
}
