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
const int MAX_N = 50005;

template <typename T>
inline T sqr(T a) { return a * a;};

ll r, ans = 0;
char c;

int main(int argc, char const *argv[])
{
    cin >> r >> c;
    ans += (r - 1) / 4 * 16;
    if (r % 2 == 0) ans += 7;
    if (c == 'f') ans += 1;
    if (c == 'e') ans += 2;
    if (c == 'd') ans += 3;
    if (c == 'a') ans += 4;
    if (c == 'b') ans += 5;
    if (c == 'c') ans += 6;
    cout << ans << endl;
    return 0;
}