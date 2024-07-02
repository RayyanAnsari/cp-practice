#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int sure = 0;

	int p, v, t;
	for (int i = 0; i < n; i++) {
		cin >> p >> v >> t;
		if (p+v+t >= 2) {
			sure++;
		}
	}

	cout << sure << endl;
}
