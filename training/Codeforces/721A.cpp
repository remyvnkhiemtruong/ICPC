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

int n, cnt = 0;
vector<int> v;
string s;

int main(int argc, char const *argv[])
{
    cin >> n;
    cin >> s;
    s += 'w'; ++n;
    for (int i = 0; i < n; ++i)
        if (s[i] != 'B') {
            if (cnt) v.push_back(cnt);
            cnt = 0;
        }
        else ++cnt;
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i + 1 != v.size()) cout << " ";
        else cout << endl;
    }
    return 0;
}