#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<str> arr;
	for (int i = 0; i < n; i++) {
		str result;
		cin >> result;
		arr.pb(result);	
	}
	bool canEat = true;
	for (int i = 1; i < n; i++) {
		if (arr[i] == "sweet") {
			if (arr[i-1] == "sweet") {
				if (i == arr.size() - 1) {
					continue;
				} else {
					canEat = false;
					break;
				}
			} else {
				continue;
			}
		} else {
			continue;
		}
	}
	if (canEat == true) {
		cout << "Yes";
	} else {
		cout << "No";
	}
}