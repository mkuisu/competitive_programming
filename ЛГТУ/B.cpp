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
		int k;
		cin >> k;
		vector<str> v;
		vector<int> ans;
		for (int j = 0; j < k; j++) {
			str s;
			cin >> s;
			v.pb(s);
		}
		reverse(v.begin(), v.end());
		for (int x = 0; x < k; x++) {
			for (int y = 0; y < 4; y++) {
				if (v[x][y] == '#') {
					cout << y + 1 << " ";
				}
			}
		}
		cout << nl;
	}
}