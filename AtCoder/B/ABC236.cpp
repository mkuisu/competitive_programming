#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		ans += i * 4;
	}
	for (int i = 0; i < (n * 4) - 1; i++) {
		int elm;
		cin >> elm;
		ans -= elm;
	}
	cout << ans;
}