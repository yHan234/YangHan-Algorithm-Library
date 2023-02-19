#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"

#include <bits/stdc++.h>
#include "Data_Structure/DSU/DSU_map.hpp"

void solve() {
    int N, Q;
    std::cin >> N >> Q;

    DSU_map<int> dsu;

    for (int i = 1; i <= Q; i++) {
        int T, U, V;
        std::cin >> T >> U >> V;

        if (T == 0) {
            dsu.unite(U, V);
        } else if (T == 1) {
            std::cout << dsu.same(U, V) << '\n';
        }
    }
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int T = 1;
    // std::cin >> T;
    while (T--) {
        solve();
    }
}