#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = 0;
	int maximum = -9999;
	for (int i = 0; i < n; i++) {
		int elm;
		cin >> elm;
		sum += elm;
		maximum = max(maximum, elm);
	}
	cout << (sum - maximum) + (maximum / 2);
}