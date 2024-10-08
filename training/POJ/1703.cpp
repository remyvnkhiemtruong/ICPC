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
// #define __DEBUG__
#ifdef __DEBUG__
    #define DEBUG(...) printf(__VA_ARGS__)
#else
    #define DEBUG(...)
#endif    
#define filename ""
#define setfile() freopen(filename".in", "r", stdin); freopen(filename".out", "w", stdout);

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int > Pii;

const double pi = acos(-1.0);
const int INF = INT_MAX;
const int MAX_N = 1e5 + 10;

template <typename T>
inline T sqr(T a) { return a * a;};

int N, t, M;

int par[2 * MAX_N], rnk[2 * MAX_N];
void init(int n) {
    for (int i = 0; i < n; ++i)
        par[i] = i, rnk[i] = 0;
}
int find(int x) {
    return par[x] == x? x : par[x] = find(par[x]);
}
bool same(int x, int y) {
    return find(x) == find(y);
}
void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (rnk[x] < rnk[y]) {
        par[x] = y;
    } else {
        par[y] = x;
        if (rnk[x] == rnk[y]) ++rnk[x];
    }
}

int main(int argc, char const *argv[])
{
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &N, &M);
        init(2 * N);
        char opt[4];
        int a, b;
        for (int i = 0; i < M; ++i) {
            scanf("%s%d%d", opt, &a, &b);
            if (opt[0] == 'D') {
                unite(a, b + N);
                unite(b, a + N);    
            } else {
                if (same(a, b)) 
                    printf("In the same gang.\n");
                else 
                    if (same(a, b + N)) 
                        printf("In different gangs.\n");
                    else printf("Not sure yet.\n");

            }
        }
    }    
    return 0;
}