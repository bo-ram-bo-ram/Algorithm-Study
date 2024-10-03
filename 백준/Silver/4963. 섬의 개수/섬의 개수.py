import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

# 8방향 벡터 (상, 하, 좌, 우, 좌상, 우상, 좌하, 우하)
di = [(-1, 0), (1, 0), (0, -1), (0, 1), (-1, -1), (-1, 1), (1, -1), (1, 1)]
ans=[]

while True : 
    answer=0
    w, h = map(int,input().split())
    # 종료 조건: 입력이 "0 0"이면 반복을 멈춤
    if w == 0 and h == 0:
        break

    def dfs(x,y):
        for d in di:
            nx,ny = x+d[0],y+d[1]
            if 0 <= nx < h and 0 <= ny < w:
                if board[nx][ny]==1 and visited[nx][ny]==False:
                    visited[nx][ny]=True
                    dfs(nx,ny)

    board = []
    visited=[[False] * w for _ in range(h)]

    for _ in range(h):
        board.append(list(map(int, input().split())))

    for i in range(h):
        for j in range(w):
            if board[i][j]==1 and visited[i][j]==False:
                visited[i][j]=True
                dfs(i,j)
                answer+=1
    ans.append(answer)

for answer in ans:
    print(answer)