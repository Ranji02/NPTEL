import math
T=int(input())

for i in range(T):
    N,M=map(int,input().split())
    l=[int(i1) for i1 in input().split()]
    low = 1
    high =max(l)
    while low<=high:
        mid=(low+high)//2
        sum=0
        for k in range(N):
            sum+=math.ceil(l[k]/mid)
        if sum<=M:
            minVal=mid
            high=mid-1
        else:
            low=mid+1
    print(minVal)
