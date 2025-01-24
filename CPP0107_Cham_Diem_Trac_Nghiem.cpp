#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int d;
		cin >> d;
		char s[16];
		int h = 1;
		for (int i = 1; i <= 15; i++){
			char c;
			cin >> c; cin.ignore();
			s[h] = c;
			h++;
		}
		int sum = 0;
		if (s[1] == 'A') sum++;
		if (s[4] == 'A') sum++;
		if (s[6] == 'C') sum++;
		if (s[9] == 'B') sum++;
		if (s[11] == 'C') sum++;
		if (s[14] == 'B') sum++;
		if (d == 101){
			if (s[2] == 'B') sum++;
			if (s[3] == 'B') sum++;
			if (s[5] == 'D') sum++;
			if (s[7] == 'C') sum++;
			if (s[8] == 'A') sum++;
			if (s[10] == 'D') sum++;
			if (s[12] == 'C') sum++;
			if (s[13] == 'A') sum++;
			if (s[15] == 'D') sum++;
		}
		else {
			if (s[2] == 'C') sum++;
			if (s[3] == 'C') sum++;
			if (s[5] == 'B') sum++;
			if (s[7] == 'D') sum++;
			if (s[8] == 'D') sum++;
			if (s[10] == 'B') sum++;
			if (s[12] == 'D') sum++;
			if (s[13] == 'D') sum++;
			if (s[15] == 'B') sum++;
		}
		cout << setprecision(2) << fixed << 10 * 1.0 * sum / 15 << "\n";
	}
}
