#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;
vector<int> b(1000001,1);
void sang(){
	b[0] = b[1] = 0;
	for (int i = 2; i * i <= 1000000; i++){
		if (b[i]) for(int j = i * i; j <= 1000000; j+= i){
			b[j] = 0;
		}
	}
}
int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		long long int n,m; cin >> m>>n;
		int cnt = 0;
		for (int i = sqrt(m); i <= sqrt(n); i++) {
			if (b[i])cnt++;
		}
		cout << cnt << "\n";
	}
}
