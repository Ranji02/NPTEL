T = int(input())
for i in range(T):
    sum=0
    N = int(input())
    dict = {}
    for i in range(N):
        D,L = map(int, input().split())
        sum+=L
        if D in dict.keys():
            dict[D] = min(dict[D], L)
        else:
            dict[D] = L
    j = 1
    ans = 0
    l = 0
    for k in sorted(dict.values()):
        l+=1
        ans+= j*k
        sum-=k
        j+=1
    print(ans+(sum*l))
