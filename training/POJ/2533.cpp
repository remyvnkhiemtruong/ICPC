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

int n, a;
vector<int> v;
void solve(int n) {
    int dp[MAX_N];
    fill(dp, dp + n, INF);
    for (int i = 0; i < n; ++i)
        *lower_bound(dp, dp + n, v[i]) = v[i];// lds: -a[i]
    printf("%ld\n", lower_bound(dp, dp + n, INF) - dp);
}

int main(int argc, char const *argv[])
{
    cin >> n; 
    for (int i = 0; i < n; ++i)
        cin >> a, v.push_back(a);
    solve(n);
    return 0;
}