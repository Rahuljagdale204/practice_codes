#include <math.h>

int main() {
    int t;
    long n, i, count, a[100000] = {0};
    long long p[100000], sum;

    scanf("%d", &t);
    while (t--) {
        scanf("%li", &n);

        for (i=0; i<n; i++) {
            scanf("%lli", &p[i]);
               }
  	   sum = count = 0;
  	    for (i=0; i<n; i++) {
  	        if (p[i] >= n) {
  	            if (sum + p[i] - count < 1000000007) {
      	            sum = sum + p[i] - count;
  	            } else {
  	                sum = sum + p[i] - count - 1000000007;
  	            }
  	            count++;
  	        } else {
  	            a[p[i]] += 1;
  	        }
  	    }
  	    for (i=n-1; i>=0; i--) {
  	        while (a[i] > 0) {
  	            a[i] -= 1;
  	            if (i > count) {
  	                if (sum + i - count < 1000000007) {
          	            sum = sum + i - count;
      	            } else {
      	                sum = sum + i - count - 1000000007;
      	            }
  	                count++;
  	            }
  	            }
  	        }
  	    printf("%lli\n", sum);
    }
    return 0;
}


