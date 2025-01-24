#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a[10] = {0};
		string s;
		cin >> s;
		int n = s.length();
		int ok = 0;
		for (int i = 0; i < n; i++){
			if (s[0] == '0'){
				ok = 1;
				break;
			}
			if (s[i] >= '0' && s[i] <= '9'){
				a[s[i] - '0']++;
			}
			else {
				ok = 1;
				break;
			}
		}	 
		if (ok) cout << "INVALID";
		else {
			int ck = 1;
			for (int i = 0; i < 10; i++){
				if (a[i] == 0){
					cout << "NO";
					ck = 0;
					break;
				}
			}
			if (ck) cout << "YES"; 
		}  
		cout << "\n";
	}
}
