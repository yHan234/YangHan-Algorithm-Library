---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Data_Structure/Fenwick_Tree/fenwick_2d.hpp\"\ntemplate <typename\
    \ T>\nstruct Fenwick_2D {\n#define lowbit(x) ((x) & -(x))\n\n    int n, m;\n \
    \   std::vector<std::vector<T>> c;  // \u4E8C\u7EF4\n\n    Fenwick_2D(int n, int\
    \ m) : n(n), m(m), c(n + 1, std::vector<T>(m + 1)) {}\n\n    void add(int x, int\
    \ y, T v) {\n        for (int i = x; i <= n; i += lowbit(i))\n            for\
    \ (int j = y; j <= m; j += lowbit(j))  // \u51E0\u7EF4\u5C31\u662F\u51E0\u5C42\
    \u5FAA\u73AF\n                c[i][j] += v;\n    }\n\n    T sum(int x, int y)\
    \ {\n        T s = 0;\n        for (int i = x; i; i -= lowbit(i))\n          \
    \  for (int j = y; j; j -= lowbit(j))  // \u51E0\u7EF4\u5C31\u662F\u51E0\u5C42\
    \u5FAA\u73AF\n                s += c[i][j];\n        return s;\n    }\n};\n"
  code: "template <typename T>\nstruct Fenwick_2D {\n#define lowbit(x) ((x) & -(x))\n\
    \n    int n, m;\n    std::vector<std::vector<T>> c;  // \u4E8C\u7EF4\n\n    Fenwick_2D(int\
    \ n, int m) : n(n), m(m), c(n + 1, std::vector<T>(m + 1)) {}\n\n    void add(int\
    \ x, int y, T v) {\n        for (int i = x; i <= n; i += lowbit(i))\n        \
    \    for (int j = y; j <= m; j += lowbit(j))  // \u51E0\u7EF4\u5C31\u662F\u51E0\
    \u5C42\u5FAA\u73AF\n                c[i][j] += v;\n    }\n\n    T sum(int x, int\
    \ y) {\n        T s = 0;\n        for (int i = x; i; i -= lowbit(i))\n       \
    \     for (int j = y; j; j -= lowbit(j))  // \u51E0\u7EF4\u5C31\u662F\u51E0\u5C42\
    \u5FAA\u73AF\n                s += c[i][j];\n        return s;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: Data_Structure/Fenwick_Tree/fenwick_2d.hpp
  requiredBy: []
  timestamp: '2023-01-28 18:00:13+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Data_Structure/Fenwick_Tree/fenwick_2d.hpp
layout: document
redirect_from:
- /library/Data_Structure/Fenwick_Tree/fenwick_2d.hpp
- /library/Data_Structure/Fenwick_Tree/fenwick_2d.hpp.html
title: Data_Structure/Fenwick_Tree/fenwick_2d.hpp
---
