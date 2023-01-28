---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: Data_Structure/Fenwick_Tree/fenwick_dif.hpp
    title: Data_Structure/Fenwick_Tree/fenwick_dif.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/Data_Structure/Fenwick_Tree/fenwick.test.cpp
    title: tests/Data_Structure/Fenwick_Tree/fenwick.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Data_Structure/Fenwick_Tree/fenwick.hpp\"\ntemplate <typename\
    \ T>\nstruct Fenwick {\n#define lowbit(x) ((x) & -(x))\n\n    int n;\n    std::vector<T>\
    \ c;\n    Fenwick(int n) : n(n), c(n + 1) {}\n\n    void add(int p, T v) {\n \
    \       assert(0 < p && p <= n);\n        for (; p <= n; p += lowbit(p))\n   \
    \         c[p] += v;\n    }\n\n    T prefix_sum(int p) {\n        assert(0 <=\
    \ p && p <= n);\n        T s = 0;\n        for (; p; p -= lowbit(p))\n       \
    \     s += c[p];\n        return s;\n    }\n\n    T sum(int l, int r) {\n    \
    \    return prefix_sum(r) - prefix_sum(l - 1);\n    }\n\n    // --- additional\
    \ ---\n\n    // O(n) build\n    Fenwick(int n, std::vector<T> a) : n(n), c(n +\
    \ 1) {\n        for (int i = 1, j = 2; i <= n; i++, j = i + lowbit(i)) {\n   \
    \         c[i] += a[i];\n            if (j <= n)  // \u6240\u6709\u5B50\u8282\u70B9\
    \u66F4\u65B0\u4E00\u6B21\u7236\u8282\u70B9\n                c[j] += c[i];\n  \
    \      }\n    }\n\n    // \u67E5\u8BE2\u6700\u5927\u7684pos\u4F7F sum(pos) <=\
    \ k\n    int bsearch(T k) {\n        int pos = 0;\n        for (int i = std::log2(n);\
    \ i >= 0; i--) {\n            pos += 1 << i;  // \u5C1D\u8BD5\u6269\u5C55\n\n\
    \            if (pos <= n && c[pos] <= k)  // \u6269\u5C55\u6210\u529F \u66F4\u65B0\
    \n                k -= c[pos];\n            else  // \u6269\u5C55\u5931\u8D25\
    \ \u64A4\u56DE\n                pos -= 1 << i;\n        }\n        return pos;\n\
    \    }\n};\n"
  code: "template <typename T>\nstruct Fenwick {\n#define lowbit(x) ((x) & -(x))\n\
    \n    int n;\n    std::vector<T> c;\n    Fenwick(int n) : n(n), c(n + 1) {}\n\n\
    \    void add(int p, T v) {\n        assert(0 < p && p <= n);\n        for (;\
    \ p <= n; p += lowbit(p))\n            c[p] += v;\n    }\n\n    T prefix_sum(int\
    \ p) {\n        assert(0 <= p && p <= n);\n        T s = 0;\n        for (; p;\
    \ p -= lowbit(p))\n            s += c[p];\n        return s;\n    }\n\n    T sum(int\
    \ l, int r) {\n        return prefix_sum(r) - prefix_sum(l - 1);\n    }\n\n  \
    \  // --- additional ---\n\n    // O(n) build\n    Fenwick(int n, std::vector<T>\
    \ a) : n(n), c(n + 1) {\n        for (int i = 1, j = 2; i <= n; i++, j = i + lowbit(i))\
    \ {\n            c[i] += a[i];\n            if (j <= n)  // \u6240\u6709\u5B50\
    \u8282\u70B9\u66F4\u65B0\u4E00\u6B21\u7236\u8282\u70B9\n                c[j] +=\
    \ c[i];\n        }\n    }\n\n    // \u67E5\u8BE2\u6700\u5927\u7684pos\u4F7F sum(pos)\
    \ <= k\n    int bsearch(T k) {\n        int pos = 0;\n        for (int i = std::log2(n);\
    \ i >= 0; i--) {\n            pos += 1 << i;  // \u5C1D\u8BD5\u6269\u5C55\n\n\
    \            if (pos <= n && c[pos] <= k)  // \u6269\u5C55\u6210\u529F \u66F4\u65B0\
    \n                k -= c[pos];\n            else  // \u6269\u5C55\u5931\u8D25\
    \ \u64A4\u56DE\n                pos -= 1 << i;\n        }\n        return pos;\n\
    \    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: Data_Structure/Fenwick_Tree/fenwick.hpp
  requiredBy:
  - Data_Structure/Fenwick_Tree/fenwick_dif.hpp
  timestamp: '2023-01-28 18:00:13+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/Data_Structure/Fenwick_Tree/fenwick.test.cpp
documentation_of: Data_Structure/Fenwick_Tree/fenwick.hpp
layout: document
redirect_from:
- /library/Data_Structure/Fenwick_Tree/fenwick.hpp
- /library/Data_Structure/Fenwick_Tree/fenwick.hpp.html
title: Data_Structure/Fenwick_Tree/fenwick.hpp
---
