---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/Data_Structure/DSU/DSU_map.test.cpp
    title: tests/Data_Structure/DSU/DSU_map.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Data_Structure/DSU/DSU_map.hpp\"\n// \u5C3D\u91CF\u4F7F\u7528\
    \ DSU + \u79BB\u6563\u5316\ntemplate <typename T>\nstruct DSU_map {\n    std::unordered_map<T,\
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
    \   }\n};\n"
  code: "// \u5C3D\u91CF\u4F7F\u7528 DSU + \u79BB\u6563\u5316\ntemplate <typename\
    \ T>\nstruct DSU_map {\n    std::unordered_map<T, T> p;\n    std::unordered_map<T,\
    \ std::size_t> sz;\n\n    T find(T x) {\n        if (!p.count(x)) return x;\n\
    \        return p[x] == x ? x : p[x] = find(p[x]);\n    }\n\n    bool unite(T\
    \ x, T y) {\n        if (!p.count(x)) p[x] = x, sz[x] = 1;\n        if (!p.count(y))\
    \ p[y] = y, sz[y] = 1;\n\n        x = find(x), y = find(y);\n        if (x ==\
    \ y) return false;\n\n        if (sz[x] < sz[y]) std::swap(x, y);\n        sz[x]\
    \ += sz[y], p[y] = x;\n        return true;\n    }\n\n    bool same(T x, T y)\
    \ { return find(x) == find(y); }\n    std::size_t size(T x) { return sz[find(x)];\
    \ }\n\n    const T operator[](const T x) { return find(x); }\n\n    std::unordered_map<T,\
    \ std::vector<T>> belong() {\n        std::unordered_map<T, std::vector<T>> res;\n\
    \        for (auto [c, p] : p) res[find(p)].push_back(c);\n        return res;\n\
    \    }\n\n    friend std::ostream &operator<<(std::ostream &os, DSU_map &u) {\n\
    \        for (auto [parent, childs] : u.belong()) {\n            os << parent\
    \ << \": \";\n            for (auto child : childs) os << child << \" \";\n  \
    \          os << '\\n';\n        }\n        return os;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: Data_Structure/DSU/DSU_map.hpp
  requiredBy: []
  timestamp: '2023-02-19 10:44:47+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/Data_Structure/DSU/DSU_map.test.cpp
documentation_of: Data_Structure/DSU/DSU_map.hpp
layout: document
redirect_from:
- /library/Data_Structure/DSU/DSU_map.hpp
- /library/Data_Structure/DSU/DSU_map.hpp.html
title: Data_Structure/DSU/DSU_map.hpp
---
