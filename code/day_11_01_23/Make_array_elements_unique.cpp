#include <bits/stdc++.h>

using namespace std;
int minIncrementForUnique(int A[], int n)
{
	map<int, int> dict;
	set<int> used;
	// Load Frequency Map (Element -> Count) and Used Set
	for (int x = 0; x < n; x++) {
		int i = A[x];
		if (dict[i] != 0)
			dict[i]++;
		else {
			dict[i] = 1;
			used.insert(i);
		}
	}

	int maxUsed = 0; // Works for +ve numbers
	int ans = 0;

	for (auto entry : dict) {

		int value = entry.first;
		int freq = entry.second;

		if (freq <= 1) // If not a duplicate, skip
			continue;

		int duplicates = freq - 1; // Number of duplicates 1 less than count
        // Start with next best option for this duplicate:
		// CurNum + 1 or an earlier maximum number that has been used
		int cur = max(value + 1, maxUsed);
		while (duplicates > 0) {
			if (used.find(cur) == used.end()) {
				ans += cur - value; // Number of increments = Available Spot - Duplicate Value
				used.insert(cur);
				duplicates--;
				maxUsed = cur;
			}
			cur++;
		}
	}
	// return answer
	return ans;
}

// Driver code
int main()
{
	int A[] = { 3, 2, 1, 2, 1, 2, 6, 7 };
	int n = sizeof(A) / sizeof(A[0]);
	cout << minIncrementForUnique(A, n);
}

