---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Data_Structure/DSU/DSU.hpp
    title: Data_Structure/DSU/DSU.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"tests/Data_Structure/DSU/DSU.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include <bits/stdc++.h>\n\
    #line 1 \"Data_Structure/DSU/DSU.hpp\"\nstruct DSU {\n    std::vector<int> p,\
    \ sz;  // parent, size\n    int cnt;                 // count of connected components\n\
    \n    DSU(int n) : p(n + 1), sz(n + 1, 1), cnt(n) { std::iota(p.begin(), p.end(),\
    \ 0); }\n\n    int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }\n\
    \n    bool unite(int x, int y) {\n        x = find(x), y = find(y);\n        if\
    \ (x == y) return false;\n\n        if (sz[x] < sz[y]) std::swap(x, y);\n    \
    \    sz[x] += sz[y], p[y] = x, cnt--;\n        return true;\n    }\n\n    bool\
    \ same(int x, int y) { return find(x) == find(y); }\n    int size(int x) { return\
    \ sz[find(x)]; }\n    int count() { return cnt; }\n\n    const int operator[](const\
    \ int x) { return find(x); }\n\n    std::vector<std::vector<int>> belong() {\n\
    \        std::vector<std::vector<int>> res(p.size());\n        for (int i = 0;\
    \ i < p.size(); i++) res[find(i)].push_back(i);\n        return res;\n    }\n\n\
    \    friend std::ostream &operator<<(std::ostream &os, DSU &u) {\n        for\
    \ (int t = 0; auto i : u.belong()) {\n            os << t++ << \": \";\n     \
    \       for (auto j : i) os << j << \" \";\n            os << '\\n';\n       \
    \ }\n        return os;\n    }\n};\n#line 5 \"tests/Data_Structure/DSU/DSU.test.cpp\"\
    \n\nvoid solve() {\n    int N, Q;\n    std::cin >> N >> Q;\n\n    DSU dsu(N);\n\
    \n    for (int i = 1; i <= Q; i++) {\n        int T, U, V;\n        std::cin >>\
    \ T >> U >> V;\n\n        if (T == 0) {\n            dsu.unite(U, V);\n      \
    \  } else if (T == 1) {\n            std::cout << dsu.same(U, V) << '\\n';\n \
    \       }\n    }\n}\n\nsigned main() {\n    std::ios::sync_with_stdio(false);\n\
    \    std::cin.tie(0);\n\n    int T = 1;\n    // std::cin >> T;\n    while (T--)\
    \ {\n        solve();\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ <bits/stdc++.h>\n#include \"Data_Structure/DSU/DSU.hpp\"\n\nvoid solve() {\n\
    \    int N, Q;\n    std::cin >> N >> Q;\n\n    DSU dsu(N);\n\n    for (int i =\
    \ 1; i <= Q; i++) {\n        int T, U, V;\n        std::cin >> T >> U >> V;\n\n\
    \        if (T == 0) {\n            dsu.unite(U, V);\n        } else if (T ==\
    \ 1) {\n            std::cout << dsu.same(U, V) << '\\n';\n        }\n    }\n\
    }\n\nsigned main() {\n    std::ios::sync_with_stdio(false);\n    std::cin.tie(0);\n\
    \n    int T = 1;\n    // std::cin >> T;\n    while (T--) {\n        solve();\n\
    \    }\n}"
  dependsOn:
  - Data_Structure/DSU/DSU.hpp
  isVerificationFile: true
  path: tests/Data_Structure/DSU/DSU.test.cpp
  requiredBy: []
  timestamp: '2023-02-19 10:44:47+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: tests/Data_Structure/DSU/DSU.test.cpp
layout: document
redirect_from:
- /verify/tests/Data_Structure/DSU/DSU.test.cpp
- /verify/tests/Data_Structure/DSU/DSU.test.cpp.html
title: tests/Data_Structure/DSU/DSU.test.cpp
---
