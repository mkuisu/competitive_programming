#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 111; i <= 999; i += 111) {
		if (i - n >= 0) {
			cout << i;
			break;
		} else {
			continue;
		}
	}
}