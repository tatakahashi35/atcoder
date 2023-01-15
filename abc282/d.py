import sys
sys.setrecursionlimit(10**7)

N, M = map(int, input().split())
EDGEs = [set() for _ in range(N)]
for i in range(M):
    u, v = map(int, input().split())
    EDGEs[u-1].add(v-1)
    EDGEs[v-1].add(u-1)
VISITED = [False] * N
COLOR = [None] * N
RED = []
BLACK = []
FLAG = True

def dfs(start):
    global VISITED
    global COLOR
    global FLAG

    for next in EDGEs[start]:
        if not VISITED[next]:
            VISITED[next] = True
            if COLOR[start] == 0:
                COLOR[next] = 1
                RED[-1] += 1
            else:
                COLOR[next] = 0
                BLACK[-1] += 1
            dfs(next)
        else:
            if COLOR[start] == COLOR[next]:
                FLAG = False

for i in range(N):
    if not VISITED[i] and FLAG:
        RED.append(0)
        BLACK.append(0)
        VISITED[i] = True
        COLOR[i] = 0
        BLACK[-1] = 1
        dfs(i)

if FLAG:
    answer = N * (N - 1) // 2
    for s1 in RED + BLACK:
        answer -= s1 * (s1 - 1) // 2
    answer -= M
    print(answer)
else:
    print(0)
