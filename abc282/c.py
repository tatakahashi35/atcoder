N = int(input())
S = input()

flag = False
for i in S:
    if i == "\"":
        flag = not flag
    if i == "," and not flag:
        print(".", end="")
    else:
        print(i, end="")
print()