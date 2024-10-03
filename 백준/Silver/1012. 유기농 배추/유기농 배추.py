import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

di=[(-1,0),(1,0),(0,-1),(0,1)] # 열 행 , 상 하 좌 우

t = int(input()) # test case 개수
for _ in range(t):
    answer = 0
    m , n, k = map(int, input().split()) # 배추밭 가로길이 세로길이 배추개수
    board=[[0]*m for _ in range(n)]

    for _ in range(k):
        x, y = map(int, input().split()) #위치 x좌표 y좌표
        board[y][x]=1

    visited = [[False] * m for _ in range(n)]

    def dfs(x,y):
        for d in di:
            nx,ny = x+d[0],y+d[1]
            if 0 <= nx < n and 0 <= ny < m:
                if board[nx][ny]==1 and not visited[nx][ny]:
                    visited[nx][ny] = True
                    dfs(nx,ny)

    for i in range(n):
        for j in range(m):
            if board[i][j]==1 and not visited[i][j]:
                visited[i][j] = True
                dfs(i,j)
                answer+=1

    print(answer)