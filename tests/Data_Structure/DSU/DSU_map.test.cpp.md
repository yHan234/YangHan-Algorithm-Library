---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Data_Structure/DSU/DSU_map.hpp
    title: Data_Structure/DSU/DSU_map.hpp
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
  bundledCode: "#line 1 \"tests/Data_Structure/DSU/DSU_map.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include <bits/stdc++.h>\n\
    #line 1 \"Data_Structure/DSU/DSU_map.hpp\"\n// \u5C3D\u91CF\u4F7F\u7528 DSU +\
    \ \u79BB\u6563\u5316\ntemplate <typename T>\nstruct DSU_map {\n    std::unordered_map<T,\
    \ T> p;\n    std::unordered_map<T, std::size_t> sz;\n\n    T find(T x) {\n   \
    \     if (!p.count(x)) return x;\n        return p[x] == x ? x : p[x] = find(p[x]);\n\
    \    }\n\n    bool unite(T x, T y) {\n        if (!p.count(x)) p[x] = x, sz[x]\
    \ = 1;\n        if (!p.count(y)) p[y] = y, sz[y] = 1;\n\n        x = find(x),\
    \ y = find(y);\n        if (x == y) return false;\n\n        if (sz[x] < sz[y])\
    \ std::swap(x, y);\n        sz[x] += sz[y], p[y] = x;\n        return true;\n\
    \    }\n\n    bool same(T x, T y) { return find(x) == find(y); }\n    std::size_t\
    \ size(T x) { return sz[find(x)]; }\n\n    const T operator[](const T x) { return\
    \ find(x); }\n\n    std::unordered_map<T, std::vector<T>> belong() {\n       \
    \ std::unordered_map<T, std::vector<T>> res;\n        for (auto [c, p] : p) res[find(p)].push_back(c);\n\
    \        return res;\n    }\n\n    friend std::ostream &operator<<(std::ostream\
    \ &os, DSU_map &u) {\n        for (auto [parent, childs] : u.belong()) {\n   \
    \         os << parent << \": \";\n            for (auto child : childs) os <<\
    \ child << \" \";\n            os << '\\n';\n        }\n        return os;\n \
    \   }\n};\n#line 5 \"tests/Data_Structure/DSU/DSU_map.test.cpp\"\n\nvoid solve()\
    \ {\n    int N, Q;\n    std::cin >> N >> Q;\n\n    DSU_map<int> dsu;\n\n    for\
    \ (int i = 1; i <= Q; i++) {\n        int T, U, V;\n        std::cin >> T >> U\
    \ >> V;\n\n        if (T == 0) {\n            dsu.unite(U, V);\n        } else\
    \ if (T == 1) {\n            std::cout << dsu.same(U, V) << '\\n';\n        }\n\
    \    }\n}\n\nsigned main() {\n    std::ios::sync_with_stdio(false);\n    std::cin.tie(0);\n\
    \n    int T = 1;\n    // std::cin >> T;\n    while (T--) {\n        solve();\n\
    \    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ <bits/stdc++.h>\n#include \"Data_Structure/DSU/DSU_map.hpp\"\n\nvoid solve()\
    \ {\n    int N, Q;\n    std::cin >> N >> Q;\n\n    DSU_map<int> dsu;\n\n    for\
    \ (int i = 1; i <= Q; i++) {\n        int T, U, V;\n        std::cin >> T >> U\
    \ >> V;\n\n        if (T == 0) {\n            dsu.unite(U, V);\n        } else\
    \ if (T == 1) {\n            std::cout << dsu.same(U, V) << '\\n';\n        }\n\
    \    }\n}\n\nsigned main() {\n    std::ios::sync_with_stdio(false);\n    std::cin.tie(0);\n\
    \n    int T = 1;\n    // std::cin >> T;\n    while (T--) {\n        solve();\n\
    \    }\n}"
  dependsOn:
  - Data_Structure/DSU/DSU_map.hpp
  isVerificationFile: true
  path: tests/Data_Structure/DSU/DSU_map.test.cpp
  requiredBy: []
  timestamp: '2023-02-19 10:44:47+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: tests/Data_Structure/DSU/DSU_map.test.cpp
layout: document
redirect_from:
- /verify/tests/Data_Structure/DSU/DSU_map.test.cpp
- /verify/tests/Data_Structure/DSU/DSU_map.test.cpp.html
title: tests/Data_Structure/DSU/DSU_map.test.cpp
---
