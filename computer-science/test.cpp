#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define lb lower_bound
#define ub upper_bound
#define pb push_back
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pld;
int find(int a, int parent[], bool compress = true)
{
    int p = a;
    if (a != parent[a])
    {
        if (compress)
        {
            parent[a] = p = find(parent[a], parent, compress);
        }
        else
        {
            p = find(parent[a], parent, compress);
        }
    }
    return p;
}
bool set_union(int a, int b, int parent[], bool compress = true)
{
    int px = find(a, parent, compress);
    int py = find(a, parent, compress);
    if (px == py)
    {
        return false;
    }
    parent[px] = py;
    return true;
}
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
}
const int INF = 0x3f3f3f3f;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n, m, q;
    cin >> n >> m >> q;
    
}