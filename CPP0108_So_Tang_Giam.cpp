#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
/* int a[1000000000] = {1};
void snt(){
	a[1] = 1;
	for (int i = 0; i < 100000;i++){
		if (a[i] == 0){
			for (int j = i * i; j < 10000000000; j+= i) a[j] = 1;
		}
	}
}
int tanggiam(int n){
	int tmp1 = n % 10;
    n /= 10;
    int tmp2 = n % 10;
    n /= 10;
    if(tmp1 == tmp2) return 0;
    if(!n) return tmp1 > tmp2 || tmp2 > tmp1;
    if(tmp1 > tmp2)
    {
        while(n)
        {
            if(n % 10 >= tmp2) return 0;
            tmp2 = n % 10;
            n /= 10;
        }
    }
    else
    {
        while(n)
        {
            if(n % 10 <= tmp2) return 0;
            tmp2 = n % 10;
            n /= 10;
        }
    }
    return 1;
}
int main(){
	snt();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;	  
		int cnt = 0; 
		int x = pow(10, n);
		for (int i = x/ 10; i < x; i++){
			if (a[i] == 0 && tanggiam(i)) cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}
*/
int a[10]={5,20,38,50,38,20,8,5,0};
int main()
{
	int n;
	cin >> n; while (n--) {
		int z; cin >> z;
		cout << a[z - 1] << endl;
	}
}