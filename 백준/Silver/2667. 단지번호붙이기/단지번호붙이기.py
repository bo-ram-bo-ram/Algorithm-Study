import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input())
answer = 0
board = []
cnt = []

di=[(-1,0),(0,-1),(1,0),(0,1)]
visited=[[False]*n for _ in range(n)]

for _ in range(n):
    board.append(list(map(int,input().strip())))

def dfs(x,y):
    global count
    visited[x][y]=True
    for d in di:
        nx,ny = x+d[0], y+d[1]
        if 0 <= nx < n and 0 <= ny < n:
            if board[nx][ny]==1 and visited[nx][ny]==False:
                count+=1
                visited[nx][ny]=True
                dfs(nx,ny)

for i in range(n):
    for j in range(n):
        if board[i][j]==1 and visited[i][j]==False:
            answer += 1
            count = 0
            count += 1
            dfs(i,j)
            cnt.append(count)

print(answer)
cnt.sort()

for c in cnt:
    print(c)