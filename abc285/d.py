import sys

import numpy as np

sys.setrecursionlimit(10**7)

N = int(input())
S = [None] * N
T = [None] * N

for i in range(N):
    s, t = input().split()
    S[i] = s
    T[i] = t

EDGES = [[] for _ in range(2 * N)]
for i in range(N):
    EDGES[N + i] = [i]

S_sorted_index = np.argsort(S ,kind="stable")
T_sorted_index = np.argsort(T ,kind="stable")
i = 0
j = 0
while i < N and j < N:
    if S[S_sorted_index[i]] < T[T_sorted_index[j]]:
        i += 1
    elif S[S_sorted_index[i]] > T[T_sorted_index[j]]:
        j += 1
    else:
        EDGES[S_sorted_index[i]] = [N + T_sorted_index[j]]
        i += 1
        j += 1

ANSWER = "Yes"
VISITED = [False] * (2 * N)
def dfs(now, visited):
    global ANSWER

    for next in EDGES[now]:
        if not VISITED[next]:
            VISITED[next] = True
            visited.append(next)
            dfs(next, visited)
        elif next in visited:
            ANSWER = "No"
            break

for i in range(N):
    if not VISITED[N + i]:
        VISITED[N + i] = True
        dfs(N + i, [N + i])

print(ANSWER)
