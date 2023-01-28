#include "fenwick.hpp"

template <typename T>
struct Fenwick_dif {
    Fenwick<T> b, bi;

    Fenwick_dif(int n) : b(n), bi(n) {}

    void add(int l, int r, T v) {
        b.add(l, v), b.add(r + 1, -v);
        bi.add(l, v * l), bi.add(r + 1, -v * (r + 1));
    }
    T prefix_sum(int p) { return (p + 1) * b.prefix_sum(p) - bi.prefix_sum(p); }
    T sum(int l, int r) { return prefix_sum(r) - prefix_sum(l - 1); }
};
