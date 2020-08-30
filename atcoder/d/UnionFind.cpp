#include <bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

struct UnionFind
{
    vector<int> r;

    UnionFind(int n)
    {
        r = vector<int>(n, -1);
    }

    int root(int x) {
        if (r[x] < 0) return x;
        return r[x] = root(r[x]);
    }

    bool unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        if (r[x] > r[y]) swap(x, y);
        r[x] += r[y];
        r[y] = x;
        return true;
    }

    int size(int x) {
        return -r[root(x)];
    }
};


int main()
{
    int N, M;
    cin >> N >> M;

    UnionFind UF(N);

    REP(i,1,M)
    {
        int A, B;
        cin >> A >> B;
        A -= 1; B -= 1;
        UF.unite(A, B);
    }

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        ans = max(ans, UF.size(i));
    }

    cout << ans << "\n";
}