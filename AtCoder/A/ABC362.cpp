#include <bits/stdc++.h>

#define ll long long
#define str string
#define nl '\n'
#define pb push_back

using namespace std;

int main() {
	int R, G, B;
	cin >> R >> G >> B;
	str dislike;
	cin >> dislike;
	if (dislike == "Red") {
		cout << min(G, B);
	} else if (dislike == "Blue") {
		cout << min(R, G);
	} else {
		cout << min(R, B);
	}
}