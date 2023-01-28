template <typename T>
struct Fenwick_2D {
#define lowbit(x) ((x) & -(x))

    int n, m;
    std::vector<std::vector<T>> c;  // 二维

    Fenwick_2D(int n, int m) : n(n), m(m), c(n + 1, std::vector<T>(m + 1)) {}

    void add(int x, int y, T v) {
        for (int i = x; i <= n; i += lowbit(i))
            for (int j = y; j <= m; j += lowbit(j))  // 几维就是几层循环
                c[i][j] += v;
    }

    T sum(int x, int y) {
        T s = 0;
        for (int i = x; i; i -= lowbit(i))
            for (int j = y; j; j -= lowbit(j))  // 几维就是几层循环
                s += c[i][j];
        return s;
    }
};
