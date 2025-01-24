#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int a[1000000] = {1};
void snt(int y){
	a[1] = 1;
	for (int i = 0; i * i <= y;i++){
		if (a[i] == 0){
			for (int j = i * i; j <= y; j+= i) a[j] = 1;
		}
	}
}
int main(){
	int t;
	cin >> t;
	snt(100000);
	while(t--){
		int x, y;
		cin >> x >> y;
		if (x > y){
			int z = x;
			x = y;
			y = z;
		}
		for (int i = x; i <= y; i++){
			if (a[i] == 0) cout << i << " ";
		}
		cout << "\n";
	}
}
