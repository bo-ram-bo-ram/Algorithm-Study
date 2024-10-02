ans = []
n, m = map(int, input().split())
visited = [False] * (n + 1)


def back():
    if len(ans) == m:
        print(' '.join(map(str, ans)))
        return
    for i in range(1, n+1):
        if visited[i]:
            continue
        visited[i] = True
        ans.append(i)
        back()
        ans.pop()
        visited[i] = False

back()