#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	str C;
	cin >> C;
	int r, m;
	for (int i = 0; i < int(C.size()); i++) {
		if (C[i] == 'R') {
			r = i;
		} else if (C[i] == 'M') {
			m = i;
		} else {
			continue;
		}
	}
	if (r < m) {
		cout << "Yes";
	} else {
		cout << "No";
	}
}