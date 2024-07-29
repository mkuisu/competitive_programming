#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int rows, columns;
	cin >> rows >> columns;
	int x, y;
	cin >> x >> y;
	vector<str> arr;
	for (int i = 0; i < rows; i++) {
		str c;
		cin >> c;
		arr.pb(c);
	}
	str rules;
	cin >> rules;
	for (int i = 0; i < int(rules.size()); i++) {
		if (rules[i] == 'L') {
			if (y == 1 || arr[x-1][y-2] == '#') {
				continue;
			} else {
				y = y - 1;
			}
		} else if (rules[i] == 'R') {
			if (y == columns || arr[x-1][y] == '#') {
				continue;
			} else {
				y = y + 1;
			}
		} else if (rules[i] == 'U') {
			if (x == 1 || arr[x-2][y-1] == '#') {
				continue;
			} else {
				x = x - 1;
			}
		} else if (rules[i] == 'D') {
			if (x == rows || arr[x][y-1] == '#') {
				continue;
			} else {
				x = x + 1;
			}
		}
	}
	cout << x << " " << y;
}