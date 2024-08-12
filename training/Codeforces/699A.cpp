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

typedef long l;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned long ul;
typedef long double ld;
typedef pair<int, int > Pii;

const double pi = acos(-1.0);
const int INF = INT_MAX;
const int MAX_N = 200000;

template <typename T>
inline T sqr(T a) { return a * a;};

int N, X[MAX_N], ans = INF;

int main(int argc, char const *argv[])
{
    string s;
    scanf("%d", &N);
    cin >> s;
    for (int i = 0; i < N; ++i)
        scanf("%d", X + i);
    for (int i = 1; i < N; ++i)
        if (s[i - 1] == 'R' && s[i] == 'L') {
            ans = min((X[i] - X[i - 1]) / 2, ans);
        }
    cout << ((ans == INF)? -1 : ans )<< endl;
    return 0;
}