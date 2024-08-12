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
const int MAX_N = 100 + 10;

template <typename T>
inline T sqr(T a) { return a * a;};

int N;
Pii A[MAX_N];
int main(int argc, char const *argv[])
{
    cin >> N;
    for (int i = 0, x; i < N; ++i) {
        cin >> x;
        A[i] = make_pair(x, i + 1);
    }
    sort(A, A + N);
    for (int i = 0; i < N / 2; ++i)
        cout << A[i].second << ' ' << A[N - i - 1].second << endl;
    return 0;
}