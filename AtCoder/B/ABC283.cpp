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
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int q_num;
		cin >> q_num;
		if (q_num == 1) {
			int num, value;
			cin >> num >> value;
			num--;
			v[num] = value;
		} else {
			int num;
			cin >> num;
			num--;
			cout << v[num] << nl;
		}
	}
}