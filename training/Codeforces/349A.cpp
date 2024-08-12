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

int N, cnt[5], a;

int main(int argc, char const *argv[])
{
    cin >> N;
    bool flag = true;
    for (int i = 0; flag && i < N; ++i) {
        cin >> a;
        if (a == 25) ++cnt[0];
        else if (a == 50) {
            --cnt[0];++cnt[1];
            if (cnt[0] < 0) flag = false;
        } else {
            if (cnt[1] > 0) {
                --cnt[1]; --cnt[0];
            } else {
                cnt[0] -= 3;
            }
            ++cnt[2];
            if (cnt[0] < 0 || cnt[1] < 0) flag = false;
        }
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
