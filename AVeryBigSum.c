#include <stdio.h>
long int aVeryBigSum(int n, int ar_size, long int* ar) {
    long int i,sum=0;
    for(i=0;i<n;i++)   sum=sum+ar[i];     
    return sum;
}
int main() {
    int n; 
    scanf("%i", &n);
    long int ar[n];
    for(int ar_i = 0; ar_i < n; ar_i++)     scanf("%li",&ar[ar_i]);
    long int result = aVeryBigSum(n, n, ar);
    printf("%ld\n", result);
    return 0;
}

