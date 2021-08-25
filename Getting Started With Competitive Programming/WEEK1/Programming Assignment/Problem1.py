t = int(input())
for i in range(t):

    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    x=k*(arr[0])
    y=(k*(arr[0]+1)-1)
    
    j = 2
    while(j<=n):
        dummy = (k*(arr[j-1])//j)
        if((k*(arr[j-1])%j)!=0):
            dummy+=1
        x=max(x,dummy)
        y=min(y,(k*(arr[j-1]+1)-1)//j)
        j+=1
    print(x,y)
