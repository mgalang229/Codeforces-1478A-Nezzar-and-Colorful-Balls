#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// set the size of the array to 101 (to avoid overflow) with 0 as its initial values
		vector<int> v(101, 0);
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			// record the number of occurrences of an element
			v[a]++;
		}
		int ans = INT_MIN;
		for (auto x : v) {
			// get the max frequency of an element
			ans = max(ans, x);
		}
		cout << ans << '\n';
	}
	return 0; 
}
