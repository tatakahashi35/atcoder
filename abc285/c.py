S = input()

answer = 0
for i, s in enumerate(S[::-1]):
    answer += (26 ** i) * (ord(s) - ord("A") + 1)
print(answer)
