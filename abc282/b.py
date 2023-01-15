N, M = [int(d) for d in input().split()]
S = [input() for i in range(N)]

answer = 0

def check(s, t):
    for i, j in zip(s, t):
        if not (i == "o" or j == "o"):
            return False
    else:
        return True

for i in range(N):
    for j in range(i+1, N):
        if check(S[i], S[j]):
            answer += 1

print(answer)
