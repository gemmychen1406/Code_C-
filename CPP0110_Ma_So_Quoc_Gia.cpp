#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string ma;
		cin >> ma;
		ma.erase(ma.find("084"), 3);	   
		cout << ma << "\n";
	}
}
