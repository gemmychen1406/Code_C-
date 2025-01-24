#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if (n % 100 == 86) cout << 1;
		else cout << 0;	   
		cout << "\n";
	}
}
