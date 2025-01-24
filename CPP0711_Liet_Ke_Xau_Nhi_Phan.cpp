#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
void BiGen(int n, string s){
	if (n == 0) cout << s << " ";
	else {
		for (int i = 0; i <= 1; i++){
			BiGen(n-1, s + char(i + '0'));
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		BiGen(n,s);	   
		cout << "\n";
	}
}
