#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	str S;
	cin >> S;
	vector<int> c(128);
	for (char s : S) {
		c[s]++;
	}
	vector<int> d(S.size() + 1);
	for (int i = 0; i < 128; i++) {
		d[c[i]]++;
	}
	bool ans = true;
	for (int i = 1; i <= S.size(); i++) {
		if (d[i] == 0 || d[i] == 2) {
			continue;
		} else {
			ans = false;
			break;
		}
	}
	if (ans) {
		cout << "Yes";
	} else {
		cout << "No";
	}
}