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
    int n, a, b;
    cin >> n >> a >> b;
    a = a + b;
    while (a <= 0) {
        a += n;
    }
    while (a > n) {
        a -= n;
    }
    cout << a << endl;
    return 0;
}