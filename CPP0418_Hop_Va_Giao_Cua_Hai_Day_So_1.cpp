#include<iostream>
#include<string>
#include<cmath>
#include<map>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		map<int, int> mp;
		for (int i = 0; i < m + n; i++){
			int x;
			cin >> x;
			mp[x]++;
		}
		for (auto i: mp){
			cout << i.first << " ";
		}	   
		cout << "\n";
		for (auto i: mp){
			if (i.second >= 2) cout << i.first << " ";
		}
		cout << "\n";
	}
}
