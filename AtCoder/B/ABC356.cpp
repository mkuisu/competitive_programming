#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> goal;
	for (int i = 0; i < m; i++) {
		int elm;
		cin >> elm;
		goal.pb(elm);
	}
	for (int i = 0; i < n; i++) {
		vector<int> data;
		for (int j = 0; j < m; j++) {
			int elm;
			cin >> elm;
			data.pb(elm);
			goal[j] -= data[j];
		}
	}
	bool status = false;
	for (int i = 0; i < m; i++) {
		if (goal[i] <= 0) {
			continue;
		} else {
			status = true;
			break;
		}
	}
	if (status) {
		cout << "No";
	} else {
		cout << "Yes";
	}
}