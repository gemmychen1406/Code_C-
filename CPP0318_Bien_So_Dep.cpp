#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int biendep(string s){
	if ((s[7]== s[8] && s[8] == s[9]) && (s[11] == s[12])) return 1;
	if (s[7] < s[8] && s[8] < s[9] && s[9] < s[11] && s[11] < s[12]) return 1;
	for (int i = 7; i < 13; i++){
		if (i == 10) continue;
		if (s[i] != '6' && s[i] != '8'){
			return 0;
		}
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
		s = "  " + s;
		if (biendep(s)) cout << "YES";
		else cout << "NO";	   
		cout << "\n";
	}
}
