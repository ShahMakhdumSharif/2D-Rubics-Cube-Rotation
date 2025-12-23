#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define int long long
#define ld long double

const ll MOD = 998244353;
const ll N = 500005;
const ll INF = 1e12;

void solve(ll tc)
{
    vector<vector<vector<char>>> rubics = {{{'R', 'R'}, {'R', 'R'}}, {{'G', 'G'}, {'G', 'G'}}, {{'B', 'B'}, {'B', 'B'}}, {{'O', 'O'}, {'O', 'O'}}, {{'W', 'W'}, {'W', 'W'}}, {{'Y', 'Y'}, {'Y', 'Y'}}};
    ll n;
    while (cin >> n)
    {
        char ch;
        cin >> ch;
        vector<vector<vector<char>>> new_rubics = rubics;
        if (n == 1)
        {
            if (ch == 'U')
            {
                new_rubics[1][0][1] = rubics[4][0][1];
                new_rubics[1][1][1] = rubics[4][1][1];
                new_rubics[5][0][1] = rubics[1][0][1];
                new_rubics[5][1][1] = rubics[1][1][1];
                new_rubics[0][0][1] = rubics[5][0][1];
                new_rubics[0][1][1] = rubics[5][1][1];
                new_rubics[4][0][1] = rubics[0][0][1];
                new_rubics[4][1][1] = rubics[0][1][1];
            }
            if (ch == 'D')
            {
                new_rubics[0][0][1] = rubics[4][0][1];
                new_rubics[0][1][1] = rubics[4][1][1];
                new_rubics[5][0][1] = rubics[0][0][1];
                new_rubics[5][1][1] = rubics[0][1][1];
                new_rubics[1][0][1] = rubics[5][0][1];
                new_rubics[1][1][1] = rubics[5][1][1];
                new_rubics[4][0][1] = rubics[1][0][1];
                new_rubics[4][1][1] = rubics[1][1][1];
            }
            if (ch == 'R')
            {
                new_rubics[2][1][0] = rubics[0][1][0];
                new_rubics[2][1][1] = rubics[0][1][1];
                new_rubics[1][1][0] = rubics[2][1][0];
                new_rubics[1][1][1] = rubics[2][1][1];
                new_rubics[3][1][0] = rubics[1][1][0];
                new_rubics[3][1][1] = rubics[1][1][1];
                new_rubics[0][1][0] = rubics[3][1][0];
                new_rubics[0][1][1] = rubics[3][1][1];
            }
            if (ch == 'L')
            {
                new_rubics[3][1][0] = rubics[0][1][0];
                new_rubics[3][1][1] = rubics[0][1][1];
                new_rubics[1][1][0] = rubics[3][1][0];
                new_rubics[1][1][1] = rubics[3][1][1];
                new_rubics[2][1][0] = rubics[1][1][0];
                new_rubics[2][1][1] = rubics[1][1][1];
                new_rubics[0][1][0] = rubics[2][1][0];
                new_rubics[0][1][1] = rubics[2][1][1];
            }
        }
        else
        {
            if (ch == 'U')
            {
                new_rubics[1] = rubics[4];
                new_rubics[5] = rubics[1];
                new_rubics[0] = rubics[5];
                new_rubics[4] = rubics[0];
            }
            if (ch == 'D')
            {
                new_rubics[0] = rubics[4];
                new_rubics[5] = rubics[0];
                new_rubics[1] = rubics[5];
                new_rubics[4] = rubics[1];
            }
            if (ch == 'R')
            {
                new_rubics[2] = rubics[0];
                new_rubics[1] = rubics[2];
                new_rubics[3] = rubics[1];
                new_rubics[0] = rubics[3];
            }
            if (ch == 'L')
            {
                new_rubics[3] = rubics[0];
                new_rubics[1] = rubics[3];
                new_rubics[2] = rubics[1];
                new_rubics[0] = rubics[2];
            }
        }
        rubics.clear();
        rubics = new_rubics;
    }
    for (ll i = 0; i < rubics.size(); i++)
    {
        for (ll j = 0; j < rubics[i].size(); j++)
        {
            for (ll k = 0; k < rubics[i][j].size(); k++)
            {
                cout << rubics[i][j][k];
            }
            cout << "\n";
        }

        cout << "\n\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    // cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        solve(i);
    }
    return 0;
}