#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<fstream>
using namespace std;

int main(){
	map<int, int> m;
	int n;
	fstream file;
	file.open("DATA.in");
	while(file >> n){
		m[n]++;
	}
	file.close();
	for (auto i: m){
		cout << i.first << " " << i.second << "\n";
	}
}
