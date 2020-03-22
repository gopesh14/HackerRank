def countArray(n, k, x):
    # Return the number of ways to fill in the array.
    oneCount = 1
    nonOneCount = 0
    MOD = (10**9)+7
    for i in range(1,n):
        prevOne = oneCount
        oneCount = (nonOneCount * (k-1))%MOD
        nonOneCount = ((prevOne) + ((nonOneCount)*(k-2)))%MOD
    if x == 1 :
        return oneCount
    else :
        return nonOneCount
#main
n,k,x = map(int,input().split())
print(countArray(n,k,x))

#This code is contributed by gopesh_kosala
