#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int) A.size()
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fillchar(a,x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const char* INPUT = "chess.inp";
const char* OUTPUT = "chess.out";

const int MOD = 1e9;

int main()
{

    freopen(INPUT, "r", stdin);
    freopen(OUTPUT, "w", stdout);

    faster;

    // Code here

    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n+1, vector<int>(n+1, 0));
    for(int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;

        arr[x][y] = 1;
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << arr[i][j] << " ";
        }

        EL;
    }

    return 0;
}