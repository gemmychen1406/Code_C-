#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char c;
		cin >> c;
		if (c >= 'A' && c <= 'Z') cout << (char)(c + 32);
		else cout << (char) (c - 32);	   
		cout << "\n";
	}
}
