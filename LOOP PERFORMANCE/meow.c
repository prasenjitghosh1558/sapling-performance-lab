
#include <stdio.h>
#include <time.h>

int main() {

    long long sum = 0;

    clock_t start = clock();

    for (int i = 1; i <= 10000000; i++) {
        sum += i;
    }

    clock_t end = clock();

    double time_taken =
        (double)(end - start) / CLOCKS_PER_SEC;

    printf("Sum = %lld\n", sum);
    printf("Execution time = %f seconds\n", time_taken);

    return 0;
}
