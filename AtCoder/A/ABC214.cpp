#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int N;
	cin >> N;
	if (N >= 1 && N <= 125) {
		cout << 4;
	} else if (N >= 126 && N <= 211) {
		cout << 6;
	} else {
		cout << 8;
	}
}