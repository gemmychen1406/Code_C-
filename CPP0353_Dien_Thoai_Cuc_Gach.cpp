#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int check(string s, int n){
	for (int i = 0; i < n/2; i++){
		if (s[i] != s[n - i - 1]) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin.ignore();
		string s;
		cin >> s;
		string a = "";
		for (int i = 0; i < s.length(); i++) {
			if (tolower(s[i]) <= 'c' && tolower(s[i]) >= 'a')
				a += "2";
			if (tolower(s[i]) <= 'f' && tolower(s[i]) >= 'd')
				a += "3";
			if (tolower(s[i]) <= 'i' && tolower(s[i]) >= 'g')
				a += "4";
			if (tolower(s[i]) <= 'l' && tolower(s[i]) >= 'j')
				a += "5";
			if (tolower(s[i]) <= 'o' && tolower(s[i]) >= 'm')
				a += "6";
			if (tolower(s[i]) <= 's' && tolower(s[i]) >= 'p')
				a += "7";
			if (tolower(s[i]) <= 'v' && tolower(s[i]) >= 't')
				a += "8";
			if (tolower(s[i]) <= 'z' && tolower(s[i]) >= 'w')
				a += "9";
		}
		if (check(a, s.length())) cout << "YES";
		else cout << "NO";
		cout << "\n";
	}
}
