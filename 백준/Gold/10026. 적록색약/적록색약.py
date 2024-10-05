import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)
n = int(input())

weak, strong = 0,0
di = [(-1,0),(1,0),(0,-1),(0,1)]
weak_visited = [[False] * n for _ in range(n)]
strong_visited = [[False] * n for _ in range(n)]

weak_board ,strong_board= [],[]

for _ in range(n):
    row = input().strip()  # 한 줄 입력을 받음
    strong_board.append(list(row))  # strong_board에 그대로 추가
    weak_board.append(list(row.replace('R', 'G')))  # R을 G로 바꿔서 weak_board에 추가

def dfs(x,y,color,board,visited):  
    for d in di:
        nx, ny=x+d[0],y+d[1]
        if 0 <= nx < n and 0 <= ny < n:
            if board[nx][ny]==color and not visited[nx][ny]:
                visited[nx][ny] = True
                dfs(nx,ny,color,board,visited)      

for i in range(n):
    for j in range(n):
        if not weak_visited[i][j]:
            weak_visited[i][j] = True
            weak += 1
            dfs(i,j,weak_board[i][j],weak_board,weak_visited)

for i in range(n):
    for j in range(n):
        if not strong_visited[i][j]:
            strong_visited[i][j] = True
            strong += 1
            dfs(i,j,strong_board[i][j],strong_board, strong_visited)

print(strong,weak)
