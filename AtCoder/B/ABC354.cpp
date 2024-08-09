#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = 0;
	vector<str> v;
	for (int i = 0; i < n; i++) {
		str s;
		int num;
		cin >> s >> num;
		sum += num;
		v.pb(s);
	}
	sort(v.begin(), v.end());
	int mod = sum % n;
	cout << v[mod];
}