#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a + b == 3) {
		cout << 3;
	} else if (a + b == 4) {
		cout << 2;
	} else {
		cout << 1;
	}
}