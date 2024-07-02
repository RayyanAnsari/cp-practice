#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("buckets.in", "r", stdin);
	freopen("buckets.out", "w", stdout);
	
	char farm[10][10];
	pair<int, int> barn, lake, rock;
	for (int i = 0; i < 10; ++i) {
		string row;
		cin >> row;
		for (int j = 0; j < 10; ++j) {
			farm[i][j] = row[j];
			if (row[j] == 'B') {
				barn = {i, j};
			} else if (row[j] == 'L') {
				lake = {i, j};
			} else if (row[j] == 'R') {
				rock = {i, j};
			}
		}
	}

	int cows = abs(barn.first - lake.first) + abs(barn.second - lake.second) - 1;
	if ((barn.first == lake.first && barn.first == rock.first &&
	   ((rock.second > lake.second && rock.second < barn.second) ||
	    (rock.second < lake.second && rock.second > barn.second))) ||
		(barn.second == lake.second && barn.second == rock.second &&
	   ((rock.first > lake.first && rock.first < barn.first) ||
	    (rock.first < lake.first && rock.first > barn.first)))) {
		cows += 2;
	}

	cout << cows << endl;
}
