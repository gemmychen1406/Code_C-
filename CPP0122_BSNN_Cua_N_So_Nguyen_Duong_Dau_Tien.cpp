#include <iostream>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int t;
    cin >> t;
    long long dp[10001];
    
    dp[1] = 1;
    for (long long i = 2; i < 10001; i++) {
        dp[i] = lcm(dp[i - 1], i);
    }
    
    while (t--) {
        int n;
        cin >> n;   
        cout << dp[n] << "\n";
    }
    
    return 0;
}