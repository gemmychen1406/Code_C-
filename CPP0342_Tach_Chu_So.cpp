#include<iostream>
#include<string>
#include<cmath>
#include<map>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		cin.ignore();
		string s;
		cin >> s;	   
		map <char, int> m;
		int sum = 0;
		int n = s.length();
		for(int i = 0; i < n; i++){
			if (s[i] >= '0' && s[i] <= '9') sum += (s[i]- '0');
			else m[s[i]]++;
		}
		for (auto i : m){
			for (int x = 0; x < i.second; x++){
				cout << i.first;
			}
		}
		cout << sum;
		cout << "\n";
	}
}
