#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	for (int w = 1; w < int(s.size()); w++) {
		for (int c = 0; c < w; c++) {
			string now = "";
			for (int i = c; i < int(s.size()); i += w) {
				now += s[i];		
		}
		if (now == t) {
			cout << "Yes" << nl;
			return 0;
			}
		}
	}
	cout << "No" << nl;
}