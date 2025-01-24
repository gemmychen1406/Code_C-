#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	getchar();
	while(t--){
		string s;
		cin >> s;
		s = s + " ";
		char c;
		int cnt = 1;
		int n = s.length();
		for (int i = 0; i < n; i++){
			if (i == 0) c = s[0];
			else {
				if (s[i] == c) cnt++;
				else {
					cout << c << cnt;
					cnt = 1;
					c = s[i];
				}
			}
		}	   
		cout << "\n";
	}
}
