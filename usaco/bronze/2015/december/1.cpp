#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	int covered;
	if ((b >= c && b <= d) || (d >= a && d <= b)) {
		covered = max({b, d}) - min({a, c});
	} else {
		covered = (b - a) + (d - c);
	}
	cout << covered << endl;
}
