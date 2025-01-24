#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
long long giaithua(int n){
	long long tich = 1;
	for (int i = 2; i <= n; i++) tich *= i;
	return tich;
}
int main(){
	int n;
	cin >> n;
	long long sum = 0;
	for (int i = 1; i <= n; i++){
		sum += giaithua(i);
	}
	cout << sum;
}
