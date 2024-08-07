#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int elm;
		cin >> elm;
		v.pb(elm);
	}
	for (int i = 0; i <= int(v.size()); i++) {
		auto it = find(v.begin(), v.end(), i);
		if (it != v.end()) {
			continue;
		} else {
			cout << i;
			break;
		}
	}
}