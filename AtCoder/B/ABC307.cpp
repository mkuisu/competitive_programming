#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<str> v;
	for (int i = 0; i < n; i++) {
		str s;
		cin >> s;
		v.pb(s);
	}
	bool status = false;
	for (int i = 0; i < int(v.size()); i++) {
		for (int j = 0; j < int(v.size()); j++) {
			str concat = v[i] + v[j];
			str reversed_concat = concat;
			reverse(concat.begin(), concat.end());
			if (concat == reversed_concat && i != j) {
				status = true;
				break;
			} else {
				continue;
			}
		}
	}
	if (status) {
		cout << "Yes";
	} else {
		cout << "No";
	}
}