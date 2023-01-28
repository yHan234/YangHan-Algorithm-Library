#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B"

#include <bits/stdc++.h>
#include "../../../Data_Structure/Fenwick_Tree/fenwick.hpp"


void solve() {
    int n, q;
    std::cin >> n >> q;

    Fenwick<long long> fenwick(n);

    while (q--) {
        int com, x, y;
        std::cin >> com >> x >> y;

        if (com == 0) {
            fenwick.add(x, y);
        } else if (com == 1) {
            std::cout << fenwick.sum(x, y) << '\n';
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    solve();

    return 0;
}