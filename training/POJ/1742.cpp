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
const int MAX_N = 100 + 10;
const int MAX_W = 1e5 + 10;

template <typename T>
inline T sqr(T a) { return a * a;};

int N, M, C[MAX_N], A[MAX_N], dp[MAX_W];

int main(int argc, char const *argv[])
{
    while (~scanf("%d%d", &N, &M) && (N + M)) {
        memset(dp, -1, sizeof dp);
        dp[0] = 0;
        for (int i = 0; i < N; ++i)
            scanf("%d", A + i);
        for (int i = 0; i < N; ++i)
            scanf("%d", C + i);
        for (int i = 0; i < N; ++i)
            for (int j = 0; j <= M; ++j)
                if (dp[j] >= 0) 
                    dp[j] = C[i];
                else if (j < A[i] || dp[j - A[i]] <= 0)
                        dp[j] = -1;
                    else dp[j] = dp[j - A[i]] - 1;    
        int ans = 0;
        for (int i = 1; i <= M; ++i)
            if (dp[i] >= 0) ++ans;    
        printf("%d\n", ans);
    }
    return 0;
}