#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int xa, ya, xb, yb, xc, yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	int ab = (xa - xb) * (xa - xb) + (ya - yb) * (ya - yb);
	int ac = (xa - xc) * (xa - xc) + (ya - yc) * (ya - yc);
	int bc = (xb - xc) * (xb - xc) + (yb - yc) * (yb - yc);
	if (ab + ac == bc || ab + bc == ac || ac + bc == ab) {
		cout << "Yes" << nl;
	} else {
		cout << "No" << nl;
	}
}