#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<tuple<int, int, int>> intervals; // {l, r, index}
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        intervals.emplace_back(l, r, i);
    }

    // Sort intervals by {l, r}
    sort(intervals.begin(), intervals.end(), [](const auto &a, const auto &b) {
        if (get<0>(a) == get<0>(b)) return get<1>(a) < get<1>(b);
        return get<0>(a) < get<0>(b);
    });

    set<int> active;
    vector<int> result(n, 0);

    for (const auto &[l, r, idx] : intervals) {
        // Remove elements from the active set that are out of range
        while (!active.empty() && *active.begin() < l) {
            active.erase(active.begin());
        }

        // If the size of the active set is 0, the interval is unique
        if (active.empty() || (*active.rbegin() < l || *active.begin() > r)) {
            result[idx] = 1;
        }

        // Add current interval to the active set
        active.insert(r);
    }

    for (auto chars);}

