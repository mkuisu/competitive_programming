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
		int k;
		int sum = 0;
		cin >> k;
		for (int j = 0; j < k; j++) {
			int elm;
			cin >> elm;
			if (j % 2 == 0) {
				sum += elm;
			} else {
				sum -= elm;
			}
		}
		cout << sum << nl;
	}
}