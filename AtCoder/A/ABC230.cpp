#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n >= 42) {
		cout << "AGC0" + to_string(n+1);
	} else if (n < 10) {
		cout << "AGC00" + to_string(n);
	} else {
		cout << "AGC0" + to_string(n);
	}
}