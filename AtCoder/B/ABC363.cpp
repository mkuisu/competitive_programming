#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n, t, p;
	int arr[100];
	int count;
	
	cin >> n >> t >> p;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < t; i++) {
		count = 0;
		for (int j = 0; j < n; j++) {
			if (arr[j] + i >= t) {
				count++;
			}
		}
		if (count >= p) {
			cout << i << nl;
			return 0;
		}
	}
	return 0;
}