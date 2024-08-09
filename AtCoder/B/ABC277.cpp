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
	bool status = true;
	for (int i = 0; i < n; i++) {
		str elm;
		cin >> elm;
		v.pb(elm);
	}
	for (int i = 0; i < int(v.size()); i++) {
		if (v[i][0] == 'H' || v[i][0] == 'D' || v[i][0] == 'C' || v[i][0] == 'S') {
			if (v[i][1] == 'A' || v[i][1] == '2' || v[i][1] == '3' || v[i][1] == '4' || v[i][1] == '5' ||
			v[i][1] == '6' || v[i][1] == '7' || v[i][1] == '8' || v[i][1] == '9' || v[i][1] == 'T' ||
			v[i][1] == 'J' || v[i][1] == 'Q' || v[i][1] == 'K') {
				for (int j = 0; j < int(v.size()); j++) {
					if (j == i) {
						continue;
					} else {
						if (v[i] == v[j]) {
							status = false;
							break;
						} else {
							continue;
						}
					}
				}
			} else {
				status = false;
				break;
			}
		} else {
			status = false;
			break;
		}
	}
	if (status) {
		cout << "Yes" << nl;
	} else {
		cout << "No" << nl;
	}
}