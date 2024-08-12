#include <bits/stdc++.h>

using namespace std;

typedef long l;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned long ul;
typedef long double ld;
typedef pair<int, int > Pii;

const double pi = acos(-1.0);
const int INF = INT_MAX;
const int MAX_N = 50005;

template <typename T>
inline T sqr(T a) { return a * a;};


int main(int argc, char const *argv[])
{
    int n, ipmax, ipmin, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == 1)
            ipmin = i;
        if (x == n)
            ipmax = i;
    }
    int ans;
    ans = max(ipmin, ipmax);
    ans = max(ans, n - ipmin - 1);
    ans = max(ans, n - ipmax - 1);
    cout << ans << endl;
    return 0;
}