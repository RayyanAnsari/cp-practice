#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);

	int a, b, x, y;
	cin >> a >> b >> x >> y;

	if (x > y) {
		swap(x, y);
	}
	if (a > b) {
		swap(a, b);
	}

	cout << min((b - a), (abs(x - a) + abs(b - y))) << endl;
}
