struct DSU {
    std::vector<int> p, sz;  // parent, size
    int cnt;                 // count of connected components

    DSU(int n) : p(n + 1), sz(n + 1, 1), cnt(n) { std::iota(p.begin(), p.end(), 0); }

    int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }

    bool unite(int x, int y) {
        x = find(x), y = find(y);
        if (x == y) return false;

        if (sz[x] < sz[y]) std::swap(x, y);
        sz[x] += sz[y], p[y] = x, cnt--;
        return true;
    }

    bool same(int x, int y) { return find(x) == find(y); }
    int size(int x) { return sz[find(x)]; }
    int count() { return cnt; }

    const int operator[](const int x) { return find(x); }

    std::vector<std::vector<int>> belong() {
        std::vector<std::vector<int>> res(p.size());
        for (int i = 0; i < p.size(); i++) res[find(i)].push_back(i);
        return res;
    }

    friend std::ostream &operator<<(std::ostream &os, DSU &u) {
        for (int t = 0; auto i : u.belong()) {
            os << t++ << ": ";
            for (auto j : i) os << j << " ";
            os << '\n';
        }
        return os;
    }
};