#include <iostream>

#define MAX_SIZE	500000
#define HASH_SIZE	10000000

using namespace std;

int n, m, temp;
int target[MAX_SIZE + 1], cnt[2*HASH_SIZE + 1];
void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++) {
         cin >> temp; cnt[temp + HASH_SIZE]++; 
         }

	cin >> m;
	for (int i = 1; i <= m; i++) {
    cin >> target[i];
    }
}
void solution()
{
	for (int i = 1; i <= m; i++) 
		cout << cnt[target[i] + HASH_SIZE] << " ";
}

void solve()
{
    input();
    solution();
}

int main(void) {

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    solve();

	return 0;
}