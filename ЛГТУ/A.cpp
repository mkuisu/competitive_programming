#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		int min_value = 9999;
		cin >> a >> b;
		for (int c = a; c <= b; c++) {
			int value = (c - a) + (b-c);
			min_value = min(value, min_value);
		}
		cout << min_value << nl;
	}
}