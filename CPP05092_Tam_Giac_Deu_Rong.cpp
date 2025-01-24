#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i; j++) cout << " ";
		for (int j = 0; j < i * 2 + 1; j++){
			if (j == 0 || j == i * 2 ||(i == n - 1 && j % 2 == 0))  cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
}
