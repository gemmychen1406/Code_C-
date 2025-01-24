#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int thuannghich(string s, int n){
	for (int i = 0; i< n/2;i++){
		if (s[i] != s[n - i - 1]) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.length();
		if (thuannghich(s,n)) cout << "YES";
		else cout << "NO";
		cout << "\n";
	}
}
