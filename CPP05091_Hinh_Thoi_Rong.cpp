#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = -n + 1; i < n; i++){
		for (int j = 0; j < abs(i); j++){
			cout << " ";
		}
		for (int j = 0; j < (n - abs(i)) * 2 - 1; j++){
			if (j == 0 || j == (n - abs(i)) * 2 - 2) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
}
