#include <iostream>
using namespace std;
int num, que;

void input()
{
    cin >> num >> que;
}

void solution()
{
    long long list[num + 1];
    int calc = 0;
    list[0] = 0;

    for (int i = 1; i <= num; i++)
    {
        long long a;
        cin >> a;
        list[i] = list[i - 1] + a;
    }

    for (int i = 0; i < que; i++)
    {

        int start, end;
        cin >> start >> end;
        int ans = list[end] - list[start - 1];
        cout << ans << '\n';
    }
}

void solve()
{
    input();
    solution();
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}