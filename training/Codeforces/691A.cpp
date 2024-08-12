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

int N, A[MAX_N], num;

int main(int argc, char const *argv[])
{
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        if (A[i] == 0) ++num;
    }
    if (N == 1)
        if (A[0] == 1)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    else if (num == 1)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}