#include <iostream>

using namespace std;
int num, jimin, hansu;
int round = 0; //

void input()
{
    cin >> num >> jimin >> hansu;
}

void solution()
{
    //다음 라운드 : (자신의 번호+1)/2
    while(jimin != hansu){
        jimin = (jimin+1)/2;
        hansu = (hansu+1)/2;
        //num % 2 == 0 ? num / 2 : num / 2 + 1;이런 방법도
        round++;
    }
    cout << round;
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