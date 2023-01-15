N = int(input())
S = input()

for i in range(1, N):
    k = 0
    try:
        while S[k] != S[k + i]:
            k += 1
    except IndexError:
        pass
    finally:
        print(k)
