#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	int t; cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int n; cin >> n;
		vector<int> m(1000);
		for (int i = 'a'; i <= 'z'; i++)
			m[i] = 0;
		for (int i = 0; i < s.length(); i++)
			m[s[i]]++;
		int cnt = 0;
		for (int i = 'a'; i <= 'z'; i++)
			if (m[i] > 0)cnt ++;
		if (26 - cnt <= n && s.length() >= 26)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
}