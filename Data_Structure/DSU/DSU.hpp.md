---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/Data_Structure/DSU/DSU.test.cpp
    title: tests/Data_Structure/DSU/DSU.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Data_Structure/DSU/DSU.hpp\"\nstruct DSU {\n    std::vector<int>\
    \ p, sz;  // parent, size\n    int cnt;                 // count of connected\
    \ components\n\n    DSU(int n) : p(n + 1), sz(n + 1, 1), cnt(n) { std::iota(p.begin(),\
    \ p.end(), 0); }\n\n    int find(int x) { return p[x] == x ? x : p[x] = find(p[x]);\
    \ }\n\n    bool unite(int x, int y) {\n        x = find(x), y = find(y);\n   \
    \     if (x == y) return false;\n\n        if (sz[x] < sz[y]) std::swap(x, y);\n\
    \        sz[x] += sz[y], p[y] = x, cnt--;\n        return true;\n    }\n\n   \
    \ bool same(int x, int y) { return find(x) == find(y); }\n    int size(int x)\
    \ { return sz[find(x)]; }\n    int count() { return cnt; }\n\n    const int operator[](const\
    \ int x) { return find(x); }\n\n    std::vector<std::vector<int>> belong() {\n\
    \        std::vector<std::vector<int>> res(p.size());\n        for (int i = 0;\
    \ i < p.size(); i++) res[find(i)].push_back(i);\n        return res;\n    }\n\n\
    \    friend std::ostream &operator<<(std::ostream &os, DSU &u) {\n        for\
    \ (int t = 0; auto i : u.belong()) {\n            os << t++ << \": \";\n     \
    \       for (auto j : i) os << j << \" \";\n            os << '\\n';\n       \
    \ }\n        return os;\n    }\n};\n"
  code: "struct DSU {\n    std::vector<int> p, sz;  // parent, size\n    int cnt;\
    \                 // count of connected components\n\n    DSU(int n) : p(n + 1),\
    \ sz(n + 1, 1), cnt(n) { std::iota(p.begin(), p.end(), 0); }\n\n    int find(int\
    \ x) { return p[x] == x ? x : p[x] = find(p[x]); }\n\n    bool unite(int x, int\
    \ y) {\n        x = find(x), y = find(y);\n        if (x == y) return false;\n\
    \n        if (sz[x] < sz[y]) std::swap(x, y);\n        sz[x] += sz[y], p[y] =\
    \ x, cnt--;\n        return true;\n    }\n\n    bool same(int x, int y) { return\
    \ find(x) == find(y); }\n    int size(int x) { return sz[find(x)]; }\n    int\
    \ count() { return cnt; }\n\n    const int operator[](const int x) { return find(x);\
    \ }\n\n    std::vector<std::vector<int>> belong() {\n        std::vector<std::vector<int>>\
    \ res(p.size());\n        for (int i = 0; i < p.size(); i++) res[find(i)].push_back(i);\n\
    \        return res;\n    }\n\n    friend std::ostream &operator<<(std::ostream\
    \ &os, DSU &u) {\n        for (int t = 0; auto i : u.belong()) {\n           \
    \ os << t++ << \": \";\n            for (auto j : i) os << j << \" \";\n     \
    \       os << '\\n';\n        }\n        return os;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: Data_Structure/DSU/DSU.hpp
  requiredBy: []
  timestamp: '2023-02-19 10:44:47+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/Data_Structure/DSU/DSU.test.cpp
documentation_of: Data_Structure/DSU/DSU.hpp
layout: document
redirect_from:
- /library/Data_Structure/DSU/DSU.hpp
- /library/Data_Structure/DSU/DSU.hpp.html
title: Data_Structure/DSU/DSU.hpp
---
