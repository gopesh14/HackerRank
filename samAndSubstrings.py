def substrings(n):
    totalSum = int(n[0])
    lastValue = int(n[0])
    MOD = 10**9+7
    for i in range(1,len(n)):
        lastValue = lastValue*10 + (int(n[i]))*(i+1)
        lastValue %= MOD
        totalSum = (totalSum + lastValue)%MOD
    return totalSum
#main
print(substrings(input()))

#This code is contributed by gopesh_kosala
