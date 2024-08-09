#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	str s;
	cin >> s;
	str repl = "s";
	int count = 0;
	for (int i = 0; i < int(s.size()); i++) {
		if (s[i] == '0' && s[i+1] == '0') {
			count++;
			s.replace(i, 2, repl);
		} else if (s[i] == 's') {
			continue;
		} else {
			count++;
			s.replace(i, 1, repl);
		}
	}
	cout << count;
}