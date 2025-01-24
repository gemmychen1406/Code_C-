#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.length();
		int ok = 0;
		for (int i = 0; i < n; i++)
			if (s[i] != '0' && s[i] != '6' && s[i] != '8') {
				ok = 1;
				break;
			}
		if (ok) cout << "NO";
		else cout << "YES";
		cout << "\n";
	}
}
