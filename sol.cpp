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
		vector<int> a(n);
		multiset<int> ms;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			// insert the elements in a multiset
			ms.insert(a[i]);
		}
		int ans = INT_MIN;
		for (int i = 0; i < n; i++) {
			// get the highest frequency of a number present in the multiset
			ans = max(ans, (int) ms.count(a[i]));
		}
		cout << ans << '\n';
	}
	return 0; 
}
