// github.com/cohaolain

#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Enter max:\n");
    int n;
    scanf("%d", &n);
    bool sieve[n];
    for (int i=2; i<n; i++) {
        if (!sieve[i]) {
            for (int j=i*2; j<n; j+=i) {
                sieve[j]=true;
            }
        }
    }
    for (int i=2; i<n; i++) {
        if (!sieve[i]) {
            printf("%d, ", i);
        }
    }
    return 0;
}