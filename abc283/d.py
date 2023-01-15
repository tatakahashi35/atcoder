USED = {}
ANSWER = True

def calc(s):
    global USED
    global ANSWER
    now = 0
    for i in range(len(s)):
        if s[i] == "(":
            now += 1
        elif s[i] == ")":
            USED[now] = set()
            now -= 1
        else:
            if now not in USED:
                USED[now] = set()
            for used in USED.values():
                if s[i] in used:
                    ANSWER = False
                    break
            else:
                USED[now].add(s[i])

s = input()
calc(s)
if ANSWER:
    print("Yes")
else:
    print("No")