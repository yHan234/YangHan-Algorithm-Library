template <typename T>
struct Fenwick {
#define lowbit(x) ((x) & -(x))

    int n;
    std::vector<T> c;
    Fenwick(int n) : n(n), c(n + 1) {}

    void add(int p, T v) {
        assert(0 < p && p <= n);
        for (; p <= n; p += lowbit(p))
            c[p] += v;
    }

    T prefix_sum(int p) {
        assert(0 <= p && p <= n);
        T s = 0;
        for (; p; p -= lowbit(p))
            s += c[p];
        return s;
    }

    T sum(int l, int r) {
        return prefix_sum(r) - prefix_sum(l - 1);
    }

    // --- additional ---

    // O(n) build
    Fenwick(int n, std::vector<T> a) : n(n), c(n + 1) {
        for (int i = 1, j = 2; i <= n; i++, j = i + lowbit(i)) {
            c[i] += a[i];
            if (j <= n)  // 所有子节点更新一次父节点
                c[j] += c[i];
        }
    }

    // 查询最大的pos使 sum(pos) <= k
    int bsearch(T k) {
        int pos = 0;
        for (int i = std::log2(n); i >= 0; i--) {
            pos += 1 << i;  // 尝试扩展

            if (pos <= n && c[pos] <= k)  // 扩展成功 更新
                k -= c[pos];
            else  // 扩展失败 撤回
                pos -= 1 << i;
        }
        return pos;
    }
};
