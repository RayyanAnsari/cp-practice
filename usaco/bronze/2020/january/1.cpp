#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("word.in", "r", stdin);
	freopen("word.out", "w", stdout);
	int n, k;
	cin >> n >> k;

	int line_len = 0;
	for (int i = 0; i < n; ++i) {
		string word;
		cin >> word;

		line_len += word.length();
		if (line_len > k) {
			cout << "\n" << word;
			line_len = word.length();
		} else {
			if (i != 0) {
				cout << " ";
			}
			cout << word;
		}
	}
	cout << endl;
}

