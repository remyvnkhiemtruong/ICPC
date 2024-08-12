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

int main(int argc, char const *argv[])
{
    int a, b;
    while (~scanf("%d%d", &a, &b) && a && b) {
        vector<int> v;
        for (int i = 0; i < 100; ++i)
            if ((a * 100 + i) % b == 0) 
                v.push_back(i);
        for (int i = 0; i < v.size(); ++i)
            printf("%02d%c", v[i], i == v.size() - 1? '\n' : ' ');
    }
    return 0;
}