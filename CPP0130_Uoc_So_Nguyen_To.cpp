#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
ll nt(ll n){
    for(ll i =2 ; i <= sqrt(n) ; i++){
        if(n%i==0){
            return 0;
        }
    }
    return n > 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        for(ll i = 2 ; i <= sqrt(n) ; i++){
            while(n%i==0 && nt(i) == 1){
                cout << i << " ";
                n/=i;
            }
        }
        if(nt(n)){
            cout << n;
        }
        cout << endl;
    }
}