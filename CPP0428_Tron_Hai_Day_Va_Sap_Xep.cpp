#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<long long> a(n + m);
		for (int i = 0; i < n + m; i++){
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < n + m; i++){
			cout << a[i] << " ";
		}
		cout << "\n";
	}
}
