#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 10e6;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int elm;
		cin >> elm;
		v.pb(elm);
	}
	for (int i = 0; i <= 10000; i++) {
		int stamina = 0;
		for (int j = 0; j < int(v.size()); j++) {
			stamina += pow((v[j] - i), 2);
		}
		if (stamina < 0) {
			continue;
		} else {
			ans = min(stamina, ans);
		}
	}
	cout << ans;
}