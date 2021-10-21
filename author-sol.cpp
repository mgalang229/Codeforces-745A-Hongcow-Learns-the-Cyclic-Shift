#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	// We only need to consider at most |s| cyclic shifts (since |s| cyclic shifts 
	// returns us back to the original string). So, put these all in a set, and 
	// return the size of the set.
	int n = s.size();
	set<string> ans = {s};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j + 1 < n; j++) {
			swap(s[j], s[j + 1]);
		}
		ans.insert(s);
	}
	cout << ans.size() << '\n';
	return 0;
}
