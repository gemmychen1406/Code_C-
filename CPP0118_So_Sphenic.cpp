#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
bool check(int n)
{
    int cnt=0;
    for(int i = 2; i <= sqrt(n); ++i)
    {
        int kt = 0;
        while(n % i == 0)
        {
            cnt++;
            kt++;
            if(kt == 2) return false;
            n /= i;
        }
    }
    if(n > 1) cnt++;
    return cnt == 3;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if (check(n)) cout << 1;
		else cout << 0;	   
		cout << "\n";
	}
}
