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
	for (int i = 0; i < int(n); i++) {
		int l, r;
		cin >> l >> r;
		ans += (r - l) + 1;
	}
	cout << ans;
}