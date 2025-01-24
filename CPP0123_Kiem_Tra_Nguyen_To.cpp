#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int snt(int n){
	if (n < 2 || n == 4) return 0;
	if (n == 2 || n == 3 || n == 5) return 1;
	for (int i = 2; i * i <= n; i ++) if (n % i == 0) return 0;
	return 1;
}
int main(){
	int n;
	cin >> n;
	if (snt(n)) cout << "YES";
	else cout << "NO";	   
}
