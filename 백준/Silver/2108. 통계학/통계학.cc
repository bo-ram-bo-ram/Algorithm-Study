#include <iostream>
#include <algorithm>    //sort 사용을 위한
#include <vector>
#include <cmath>    //round 사용을 위한
using namespace std;

int n = 0;
int arr[500000] = {0};
double avg = 0.0;
double total = 0.0; //놓친 부분 실수형으로 선언해라
int i=0;
int cnt[8001] = {0};   //최빈값을 찾기 위해 빈도수를 세는 배열
vector<int> modes;  //최빈값을 저장하는 용도
int modeCnt = 0;    //현재까지 발견한 최빈값

void input(){
    cin >> n;

    for(i=0; i<n ; i++){
        cin >> arr[i];
        total += arr[i];
        ++cnt[arr[i] + 4000];    //최빈값을 위해
    }
}

void solution(){
    //산술평균
    avg = total / n;
    cout << round(avg)+ 0.0  << "\n";   //+ 0.0 해줘야함
    /*
    C++에선 산술평균과 관련하여 2가지 문제가 있다.

    round를 활용했을 때 -0이 나온다.
    float의 정밀도에 의해 오답이 나온다.
    double을 사용하고 0.0을 더해주거나 -0인 경우를 따로 처리해 주는 방식으로 해결이 가능하다.
    */


    //중앙값
    sort(arr,arr+n);
    cout << arr[n/2] << "\n";   //처음에 n-1/2로 접근했는데 안됨 이게맞음

    //최빈값
    for (i = 0; i < 8001; i++)
    {
        if (cnt[i] > modeCnt) // 다르면 초기화
        {
            modes.clear();
            modeCnt = cnt[i];
            modes.push_back(i - 4000);
        }
        else if (cnt[i] == modeCnt) // 같으면 추가
        {
            modes.push_back(i - 4000);
        }
    }

    cout << (modes.size() == 1 ? modes.front() : modes[1]) << "\n"; // 크기가 1이면 맨 앞, 아니면 2번째
 
    //범위
    cout<< arr[n-1]-arr[0]<< "\n";
}

void solve(){
    input();
    solution();
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    solve();
    return 0;
}