#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct tomato{
    int y, x;
};

//상 하 좌 우
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int m, n;
int box[1001][1001];
queue<tomato> q;

//상자 범위 안에 있는지 체크
bool is_inside(int ny, int nx){
    return (0 <= ny && ny < n && 0 <= nx && nx < m);
}

//너비우선탐색
void bfs(void){
    
    while(!q.empty()){
        //큐에서 현재 토마토의 좌표 꺼내오기
        int y = q.front().y;
        int x = q.front().x;
        q.pop();

        for(int i=0; i<4; i++){
            //인접 토마토의 좌표 계산
            int ny = y + dy[i];
            int nx = x + dx[i];
            //상자 범위를 벗어나지 않고 안 익었다면
            if(is_inside(ny, nx) == 1 && box[ny][nx] == 0){
                box[ny][nx] = box[y][x] + 1; //익은 날짜 저장
                q.push({ ny, nx });//큐에추가
            }
        }
    }
}

int main(){

    cin >> m >> n;

    //상자 입력
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> box[i][j];
            if(box[i][j] == 1) q.push({i, j});//익은 토마토는 큐에 추가
        }
    }

    bfs();

    int max = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            //안 익은 토마토가 존재할 경우
            if(box[i][j] == 0) {
                cout << -1 << "\n";
                return 0;
            }
            //최댓값 계산
            if(max < box[i][j]) max = box[i][j];
        }
    }

    //최댓값-1 출력
    cout << max-1 << "\n";

    return 0;
}