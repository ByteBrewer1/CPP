#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
        int N, K;
        cin >> N >> K;
        int X = (N + (K - 1)) / K;
        int Y = (N + (K - 1)) % K + 1;
        cout << X << " " << Y << "\n";
	}
	return 0;
}