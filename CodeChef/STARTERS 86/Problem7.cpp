/*
 * AUTHOR :: RAHUL MISTRY
 * DATE   :: 00/00/2023
 */

#define RDEBUG
using namespace std;

// intrinstic
#include <immintrin.h>

#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cfenv>
#include <cfloat>
#include <chrono>
#include <cinttypes>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <initializer_list>
#include <iomanip>
#include <ios>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <streambuf>
#include <string>
#include <tuple>
#include <type_traits>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

// utility
namespace Rahul {
using ll = long long;
using i64 = long long;
using u64 = unsigned long long;
using i128 = __int128_t;
using u128 = __uint128_t;

template <typename T>
using V = vector<T>;
template <typename T>
using VV = vector<vector<T>>;
using vi = vector<int>;
using vl = vector<long long>;
using vd = V<double>;
using vs = V<string>;
using vvi = vector<vector<int>>;
using vvl = vector<vector<long long>>;

template <typename T, typename U>
struct P : pair<T, U> {
  template <typename... Args>
  P(Args... args) : pair<T, U>(args...) {}

  using pair<T, U>::first;
  using pair<T, U>::second;

  P &operator+=(const P &r) {
    first += r.first;
    second += r.second;
    return *this;
  }
  P &operator-=(const P &r) {
    first -= r.first;
    second -= r.second;
    return *this;
  }
  P &operator*=(const P &r) {
    first *= r.first;
    second *= r.second;
    return *this;
  }
  template <typename S>
  P &operator*=(const S &r) {
    first *= r, second *= r;
    return *this;
  }
  P operator+(const P &r) const { return P(*this) += r; }
  P operator-(const P &r) const { return P(*this) -= r; }
  P operator*(const P &r) const { return P(*this) *= r; }
  template <typename S>
  P operator*(const S &r) const {
    return P(*this) *= r;
  }
  P operator-() const { return P{-first, -second}; }
};

using pl = P<ll, ll>;
using pi = P<int, int>;
using vp = V<pl>;

constexpr int inf = 1001001001;
constexpr long long infLL = 4004004004004004004LL;

template <typename T>
int sz(const T &t) {
  return t.size();
}

template <typename T, typename U>
inline bool amin(T &x, U y) {
  return (y < x) ? (x = y, true) : false;
}
template <typename T, typename U>
inline bool amax(T &x, U y) {
  return (x < y) ? (x = y, true) : false;
}

template <typename T>
inline T Max(const vector<T> &v) {
  return *max_element(begin(v), end(v));
}
template <typename T>
inline T Min(const vector<T> &v) {
  return *min_element(begin(v), end(v));
}
template <typename T>
inline long long Sum(const vector<T> &v) {
  return accumulate(begin(v), end(v), 0LL);
}

template <typename T>
int lb(const vector<T> &v, const T &a) {
  return lower_bound(begin(v), end(v), a) - begin(v);
}
template <typename T>
int ub(const vector<T> &v, const T &a) {
  return upper_bound(begin(v), end(v), a) - begin(v);
}

constexpr long long TEN(int n) {
  long long ret = 1, x = 10;
  for (; n; x *= x, n >>= 1) ret *= (n & 1 ? x : 1);
  return ret;
}

template <typename T, typename U>
pair<T, U> mkp(const T &t, const U &u) {
  return make_pair(t, u);
}

template <typename T>
vector<T> mkrui(const vector<T> &v, bool rev = false) {
  vector<T> ret(v.size() + 1);
  if (rev) {
    for (int i = int(v.size()) - 1; i >= 0; i--) ret[i] = v[i] + ret[i + 1];
  } else {
    for (int i = 0; i < int(v.size()); i++) ret[i + 1] = ret[i] + v[i];
  }
  return ret;
};

template <typename T>
vector<T> mkuni(const vector<T> &v) {
  vector<T> ret(v);
  sort(ret.begin(), ret.end());
  ret.erase(unique(ret.begin(), ret.end()), ret.end());
  return ret;
}

template <typename F>
vector<int> mkord(int N,F f) {
  vector<int> ord(N);
  iota(begin(ord), end(ord), 0);
  sort(begin(ord), end(ord), f);
  return ord;
}

template <typename T>
vector<int> mkinv(vector<T> &v) {
  int max_val = *max_element(begin(v), end(v));
  vector<int> inv(max_val + 1, -1);
  for (int i = 0; i < (int)v.size(); i++) inv[v[i]] = i;
  return inv;
}

vector<int> mkiota(int n) {
  vector<int> ret(n);
  iota(begin(ret), end(ret), 0);
  return ret;
}

template <typename T>
T mkrev(const T &v) {
  T w{v};
  reverse(begin(w), end(w));
  return w;
}

template <typename T>
bool nxp(vector<T> &v) {
  return next_permutation(begin(v), end(v));
}

template <typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

}  // namespace Rahul

// bit operation
namespace Rahul {
__attribute__((target("popcnt"))) inline int popcnt(const u64 &a) {
  return _mm_popcnt_u64(a);
}
inline int lsb(const u64 &a) { return a ? __builtin_ctzll(a) : 64; }
inline int ctz(const u64 &a) { return a ? __builtin_ctzll(a) : 64; }
inline int msb(const u64 &a) { return a ? 63 - __builtin_clzll(a) : -1; }
template <typename T>
inline int gbit(const T &a, int i) {
  return (a >> i) & 1;
}
template <typename T>
inline void sbit(T &a, int i, bool b) {
  if (gbit(a, i) != b) a ^= T(1) << i;
}
constexpr long long PW(int n) { return 1LL << n; }
constexpr long long MSK(int n) { return (1LL << n) - 1; }
}  // namespace Rahul

// inout
namespace Rahul {

template <typename T, typename U>
ostream &operator<<(ostream &os, const pair<T, U> &p) {
  os << p.first << " " << p.second;
  return os;
}
template <typename T, typename U>
istream &operator>>(istream &is, pair<T, U> &p) {
  is >> p.first >> p.second;
  return is;
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
  int s = (int)v.size();
  for (int i = 0; i < s; i++) os << (i ? " " : "") << v[i];
  return os;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &v) {
  for (auto &x : v) is >> x;
  return is;
}

istream &operator>>(istream &is, __int128_t &x) {
  string S;
  is >> S;
  x = 0;
  int flag = 0;
  for (auto &c : S) {
    if (c == '-') {
      flag = true;
      continue;
    }
    x *= 10;
    x += c - '0';
  }
  if (flag) x = -x;
  return is;
}

istream &operator>>(istream &is, __uint128_t &x) {
  string S;
  is >> S;
  x = 0;
  for (auto &c : S) {
    x *= 10;
    x += c - '0';
  }
  return is;
}

ostream &operator<<(ostream &os, __int128_t x) {
  if (x == 0) return os << 0;
  if (x < 0) os << '-', x = -x;
  string S;
  while (x) S.push_back('0' + x % 10), x /= 10;
  reverse(begin(S), end(S));
  return os << S;
}
ostream &operator<<(ostream &os, __uint128_t x) {
  if (x == 0) return os << 0;
  string S;
  while (x) S.push_back('0' + x % 10), x /= 10;
  reverse(begin(S), end(S));
  return os << S;
}

void in() {}
template <typename T, class... U>
void in(T &t, U &...u) {
  cin >> t;
  in(u...);
}

void out() { cout << "\n"; }
template <typename T, class... U, char sep = ' '>
void out(const T &t, const U &...u) {
  cout << t;
  if (sizeof...(u)) cout << sep;
  out(u...);
}

void outr() {}
template <typename T, class... U, char sep = ' '>
void outr(const T &t, const U &...u) {
  cout << t;
  outr(u...);
}

struct IoSetupNya {
  IoSetupNya() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    cerr << fixed << setprecision(7);
  }
} iosetupnya;

}  // namespace Rahul

// debug

#ifdef RahulDebug
#define trc(...) (void(0))
#else
#define trc(...) (void(0))
#endif

#ifdef RahulLocal
#define trc2(...) (void(0))
#else
#define trc2(...) (void(0))
#endif

// macro
#define each(x, v) for (auto&& x : v)
#define each2(x, y, v) for (auto&& [x, y] : v)
#define all(v) (v).begin(), (v).end()
#define rep(i, N) for (long long i = 0; i < (long long)(N); i++)
#define repr(i, N) for (long long i = (long long)(N)-1; i >= 0; i--)
#define rep1(i, N) for (long long i = 1; i <= (long long)(N); i++)
#define repr1(i, N) for (long long i = (N); (long long)(i) > 0; i--)
#define reg(i, a, b) for (long long i = (a); i < (b); i++)
#define regr(i, a, b) for (long long i = (b)-1; i >= (a); i--)
#define fi first
#define se second
#define ini(...)   \
  int __VA_ARGS__; \
  in(__VA_ARGS__)
#define inl(...)         \
  long long __VA_ARGS__; \
  in(__VA_ARGS__)
#define ins(...)      \
  string __VA_ARGS__; \
  in(__VA_ARGS__)
#define in2(s, t)                           \
  for (int i = 0; i < (int)s.size(); i++) { \
    in(s[i], t[i]);                         \
  }
#define in3(s, t, u)                        \
  for (int i = 0; i < (int)s.size(); i++) { \
    in(s[i], t[i], u[i]);                   \
  }
#define in4(s, t, u, v)                     \
  for (int i = 0; i < (int)s.size(); i++) { \
    in(s[i], t[i], u[i], v[i]);             \
  }
#define die(...)             \
  do {                       \
    Rahul::out(__VA_ARGS__); \
    return;                  \
  } while (0)

namespace Rahul {
void solve();
}
int main() { Rahul::solve(); }

//


template <typename T>
struct BinaryIndexedTree {
  int N;
  vector<T> data;

  BinaryIndexedTree() = default;

  BinaryIndexedTree(int size) { init(size); }

  void init(int size) {
    N = size + 2;
    data.assign(N + 1, {});
  }

  // get sum of [0,k]
  T sum(int k) const {
    if (k < 0) return T{};  // return 0 if k < 0
    T ret{};
    for (++k; k > 0; k -= k & -k) ret += data[k];
    return ret;
  }

  // getsum of [l,r]
  inline T sum(int l, int r) const { return sum(r) - sum(l - 1); }

  // get value of k
  inline T operator[](int k) const { return sum(k) - sum(k - 1); }

  // data[k] += x
  void add(int k, T x) {
    for (++k; k < N; k += k & -k) data[k] += x;
  }

  // range add x to [l,r]
  void imos(int l, int r, T x) {
    add(l, x);
    add(r + 1, -x);
  }

  // minimize i s.t. sum(i) >= w
  int lower_bound(T w) {
    if (w <= 0) return 0;
    int x = 0;
    for (int k = 1 << __lg(N); k; k >>= 1) {
      if (x + k <= N - 1 && data[x + k] < w) {
        w -= data[x + k];
        x += k;
      }
    }
    return x;
  }

  // minimize i s.t. sum(i) > w
  int upper_bound(T w) {
    if (w < 0) return 0;
    int x = 0;
    for (int k = 1 << __lg(N); k; k >>= 1) {
      if (x + k <= N - 1 && data[x + k] <= w) {
        w -= data[x + k];
        x += k;
      }
    }
    return x;
  }
};

/**
 * @brief Binary Indexed Tree(Fenwick Tree)
 * @docs docs/data-structure/binary-indexed-tree.md
 */

// 転倒数
template <typename T>
long long inversion_counting(const vector<T>& v) {
  vector<T> xs{v};
  sort(begin(xs), end(xs));
  xs.erase(unique(begin(xs), end(xs)), end(xs));
  int s = xs.size();
  BinaryIndexedTree<long long> bit(s + 1);
  long long ans = 0;
  for (auto& x : v) {
    int i = lower_bound(begin(xs), end(xs), x) - begin(xs);
    if (i + 1 != s) ans += bit.sum(i + 1, s - 1);
    bit.add(i, 1);
  }
  return ans;
}

// 隣接 swap によって v を w に変えるのにかかる手数 (不可能 : -1)
template <typename T>
long long swap_distance(const vector<T>& v, const vector<T>& w) {
  if (v.size() != w.size()) return -1;
  int N = v.size();
  vector<pair<T, int>> vv(N), ww(N);
  for (int i = 0; i < N; i++) {
    vv[i] = make_pair(v[i], i);
    ww[i] = make_pair(w[i], i);
  }
  sort(begin(vv), end(vv));
  sort(begin(ww), end(ww));
  for (int i = 0; i < N; i++) {
    if (vv[i].first != ww[i].first) return -1;
  }
  vector<int> order(N);
  for (int i = 0; i < N; i++) {
    order[vv[i].second] = ww[i].second;
  }
  return inversion_counting(order);
}

//

namespace my_rand {
using i64 = long long;
using u64 = unsigned long long;

// [0, 2^64 - 1)
u64 rng() {
    static u64 _x =
        u64(chrono::duration_cast<chrono::nanoseconds>(
                chrono::high_resolution_clock::now().time_since_epoch())
                .count()) *
        10150724397891781847ULL;
    _x ^= _x << 7;
    return _x ^= _x >> 9;
}

// [l, r]
i64 rng(i64 l, i64 r) {
    assert(l <= r);
    return l + rng() % (r - l + 1);
}

// [l, r)
i64 randint(i64 l, i64 r) {
    assert(l < r);
    return l + rng() % (r - l);
}

// choose n numbers from [l, r) without overlapping
vector<i64> randset(i64 l, i64 r, i64 n) {
  assert(l <= r && n <= r - l);
  unordered_set<i64> s;
  for (i64 i = n; i; --i) {
    i64 m = randint(l, r + 1 - i);
    if (s.find(m) != s.end()) m = r - i;
    s.insert(m);
  }
  vector<i64> ret;
  for (auto& x : s) ret.push_back(x);
  return ret;
}

// [0.0, 1.0)
double rnd() { return rng() * 5.42101086242752217004e-20; }

template <typename T>
void randshf(vector<T>& v) {
  int n = v.size();
  for (int i = 1; i < n; i++) swap(v[i], v[randint(0, i + 1)]);
}

}  // namespace my_rand

using my_rand::randint;
using my_rand::randset;
using my_rand::randshf;
using my_rand::rnd;
using my_rand::rng;

using namespace Rahul;

vi prod(vi p, vi q) {
  int N = sz(p);
  repr(i, N - 1) swap(p[q[i]], p[q[i + 1]]);
  return p;
}

vvi calc(int N, vi a) {
  {
    ll x = inversion_counting(a);
    if (N % 2 == 1 and x % 2 == 1) return {vi{-1}};
  }
  vvi ans;

  rep(t, 5) {
    trc2(a);
    int ok = 1;
    rep(i, N) if (a[i] != i) ok = 0;
    if (ok) break;
    assert(t != 4);

    vi c;
    {
      vvi cs;
      vi vis(N);
      rep(i, N) {
        vi cc;
        for (int j = i; !vis[j]; j = a[j]) {
          cc.push_back(j);
          vis[j] = 1;
        }
        if (sz(cc)) cs.push_back(cc);
      }
      sort(all(cs), [](vi& f, vi& g) { return sz(f) < sz(g); });
      trc(cs);
      if (sz(cs) == 1) {
      } else {
        auto& v = cs.back();
        if (sz(cs.back()) % 2 == 1) {
          vi w;
          rep(i, sz(v)) w.push_back(v[i * 2 % sz(v)]);
          v = w;
        }
      }
      each(cc, cs) each(xx, cc) c.push_back(xx);
    }
    trc2(c);
    ans.push_back(c);

    auto b = prod(a, c);
    a = b;
  }
  return ans;
}

void q() {
  /*
  rep(_, 10000) {
    int N = rng(10, 20);
    vi v = mkiota(N);
    randshf(v);
    calc(N, v);
  }
  trc2("OK");
  */

  ini(N);
  vi a(N);
  in(a);
  each(x, a)-- x;

  auto ans = calc(N, a);

  if (sz(ans) == 1 and ans[0] == vi{-1}) {
    die(-1);
  }
  out(sz(ans));
  each(v, ans) {
    each(x, v) x++;
    out(v);
  }
}

void Rahul::solve() {

}
