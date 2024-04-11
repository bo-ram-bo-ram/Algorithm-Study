#include <iostream>

using namespace std;
int num = 0;  //전체 사람의 수
pair<int, int> arr[50]; //몸무게와 키를 저장할 pair 클래스
int ranking[50]={0};

void input(){
    for (int i = 0; i < num; i++) {
		cin >> arr[i].first >> arr[i].second;   //pair클래스를 사용해 입력받은 몸무게와 키 저장
        ranking[i] = 1; //놓친 부분, 값 넣으면서 일단 랭킹 2로 해주고 증가시킴
	}
}

void solution(){
    // 알고리즘 : i번째랑 i+1번째 신체 조건 비교, i가 i+i보다 덩치가 작으면 rank[i]의 값을 증가시킴
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (arr[i].first < arr[j].first && arr[i].second < arr[j].second) { // 둘 다 만족해야하기 때문에 &&
                ranking[i]++;
            }
        }
    }
}

void solve()
{
    cin >> num; //첫줄에 입력받은 사람의 수 num에 저장

    input();
    solution();

    for (int i = 0; i < num; i++) {
        cout << ranking[i] << " ";
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
