#include <bits/stdc++.h>

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
const int MAX_N = 19;

template <typename T>
inline T sqr(T a) { return a * a;};

int n, X[MAX_N];

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 3; ++i)
        scanf("%d", X + i);
    sort(X, X + 3);
    printf("%d\n", X[2] - X[0]);
    return 0;
}