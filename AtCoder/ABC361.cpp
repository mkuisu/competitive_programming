#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n, k, x;
	cin >> n >> k >> x;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		int el;
		cin >> el;
		if (i == k - 1) {
			arr.pb(el);
			arr.pb(x);
		} else {
			arr.pb(el);
		}
	}
	for (int i = 0; i < int(arr.size()); i++) {
		cout << arr[i] << " ";
	}
}