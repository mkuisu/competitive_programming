#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	str s;
	cin >> s;
	for (int i = 0; i < int(s.size()); i++) {
		if (s[i] != s[i+1]) {
			if (s[i+1] != s[i+2]) {
				cout << i + 2;
				break;
			} else {
				cout << i + 1;
				break;
			}
	} else {
		continue;
	}
	}
}