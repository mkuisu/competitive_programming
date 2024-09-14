#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ll x, y, d;
		cin >> x >> y >> d;
		int x1 = 0, y1 = 0;
		if (x % d >= 1) {
			x1 = (x / d) + 1;
		} else {
			x1 = x / d;
		}
		if (y % d >= 1) {
			y1 = (y / d) + 1;
		} else {
			y1 = y / d;
		}
		if (x1 > y1) {
			cout << (x1 * 2) - 1 << nl;
		} else {
			cout << (y1 * 2) << nl;
		}
	}
}