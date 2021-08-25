import math

def SieveOfEratosthenes(n):

    prime = [True for i in range(n+1)]
    p = 2
    while (p * p <= n):
        if (prime[p] == True):
            for i in range(p * p, n+1, p):
                prime[i] = False
        p += 1
    return prime

t = int(input())
primearr = SieveOfEratosthenes(1000001)

for i in range(t):
    n = int(input())
    powerarr = [2,4,6,10,12,16,18,22,28,30,36]
    j=2
    count = 0
    limit = (int)(math.sqrt(n))+1
    while(j<=limit):
        for k in powerarr:
            if(primearr[j] and pow(j,k) < n):
            	count+=1
            else:
            	break
        j+=1
    print(count)
