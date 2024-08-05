#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4;
	cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;
	if (x4 > x1 && x2 > x3) {
		if (y4 > y1 && y2 > y3) {
			if (z4 > z1 && z2 > z3) {
				cout << "Yes";
			} else {
				cout << "No";
			}
		} else {
			cout << "No";
		}
	} else {
		cout << "No";
	}
}