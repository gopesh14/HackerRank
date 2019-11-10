#include <math.h>
#include <stdio.h>
int birthdayCakeCandles(int n, int ar_size, int* ar) {
int big,count=0,i;
    big=ar[0];
    for(i=0;i<n;i ++){
        if(ar[i]>big){
            big=ar[i];
            count=1;
        }else if(big==ar[i])
        {
            count=count+1;
        }
    }
return count;
}
int main() {
    int n; 
    scanf("%i", &n);
    int ar[n];
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, n, ar);
    printf("%d\n", result);
    return 0;
}

