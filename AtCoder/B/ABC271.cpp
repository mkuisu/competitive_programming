#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	vector<vector<int>> v;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		vector<int> v1;
		for (int j = 0; j < num; j++) {
			int elm;
			cin >> elm;
			v1.pb(elm);
		}
		v.pb(v1);
	}
	for (int i = 0; i < q; i++) {
		int s;
		int t;
		cin >> s >> t;
		s--;
		t--;
		cout << v[s][t] << nl;
	}
}