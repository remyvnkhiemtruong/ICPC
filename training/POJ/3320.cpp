#include <cctype>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <complex>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <utility>
#include <bitset>

#define IOS std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
#define __DEBUG__
#ifdef __DEBUG__
    #define DEBUG(...) printf(__VA_ARGS__)
#else
    #define DEBUG(...)
#endif    
#define filename ""
#define setfile() freopen(filename".in", "r", stdin); freopen(filename".out", "w", stdout);

using namespace std;

typedef long l;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned long ul;
typedef long double ld;
typedef pair<int, int > Pii;

const double pi = acos(-1.0);
const int INF = INT_MAX;
const int MAX_N = 1e6;

template <typename T>
inline T sqr(T a) { return a * a;};

int main(int argc, char const *argv[])
{
    int p, x, s = 0, t = 0, num = 0, a[MAX_N];
    set<int> all;
    cin >> p;
    for (int i = 0; i < p; ++i) {
        scanf("%d", a + i);
        all.insert(a[i]);
    }
    int n = all.size(), res = p;
    map<int, int> count;
    for (;;) {
        while (t < p && num < n)
            if (count[a[t++]]++ == 0)
                num++;
        if (num < n) break;
        res = min(res, t - s);
        if (--count[a[s++]] == 0)
            num--;
    }
    printf("%d\n", res);
    return 0;
}