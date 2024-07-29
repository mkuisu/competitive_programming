#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n >= 1 && n <= 99) {
		int upper_bound = 100;
		cout << upper_bound - n;
	} else if (n >= 100 && n <= 199) {
		int upper_bound = 200;
		cout << upper_bound - n;
	} else if (n >= 200 && n <= 299) {
		int upper_bound = 300;
		cout << upper_bound - n;
	} else if (n >= 300 && n <= 399) {
		int upper_bound = 400;
		cout << upper_bound - n;
	} else {
		cout << "WTF";
	}
}