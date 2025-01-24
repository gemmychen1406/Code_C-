#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		map<int, int> m;
		for (int i = 0; i < n; i++){
			int x;
			cin >> x;
			m[x]++;
		}	   
		int cnt = 0;
		for(pair<int, int> it : m){
			if (it.second > 1) cnt += it.second;
	    }
		cout << cnt << "\n";
	}
}
