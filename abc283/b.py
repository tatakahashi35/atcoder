N = int(input())
A = input().split()
Q = int(input())
query = [input() for i in range(Q)]

for q in query:
    if q[0] == '1':
        _, k, x = q.split()
        A[int(k)-1] = x
    else:
        _, k = q.split()
        print(A[int(k)-1])
