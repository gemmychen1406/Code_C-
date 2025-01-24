#include<iostream>
#include<string>
#include<cmath>
#include<ctype.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	int n = s.length();
	for(int i = 0; i < n; i++){
		s[i] = tolower(s[i]);
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o' || s[i] == 'y') continue;
		cout << "." << (char)s[i];
	}
}
