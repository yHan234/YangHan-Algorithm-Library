// 尽量使用 DSU + 离散化
template <typename T>
struct DSU_map {
    std::unordered_map<T, T> p;
    std::unordered_map<T, std::size_t> sz;

    T find(T x) {
        if (!p.count(x)) return x;
        return p[x] == x ? x : p[x] = find(p[x]);
    }

    bool unite(T x, T y) {
        if (!p.count(x)) p[x] = x, sz[x] = 1;
        if (!p.count(y)) p[y] = y, sz[y] = 1;

        x = find(x), y = find(y);
        if (x == y) return false;

        if (sz[x] < sz[y]) std::swap(x, y);
        sz[x] += sz[y], p[y] = x;
        return true;
    }

    bool same(T x, T y) { return find(x) == find(y); }
    std::size_t size(T x) { return sz[find(x)]; }

    const T operator[](const T x) { return find(x); }

    std::unordered_map<T, std::vector<T>> belong() {
        std::unordered_map<T, std::vector<T>> res;
        for (auto [c, p] : p) res[find(p)].push_back(c);
        return res;
    }

    friend std::ostream &operator<<(std::ostream &os, DSU_map &u) {
        for (auto [parent, childs] : u.belong()) {
            os << parent << ": ";
            for (auto child : childs) os << child << " ";
            os << '\n';
        }
        return os;
    }
};