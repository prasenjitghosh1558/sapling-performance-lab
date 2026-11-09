
#include <iostream>
#include <ctime>
using namespace std;

int main() {

    long long sum = 0;

    clock_t start = clock();

    for (int i = 1; i <= 10000000; i++) {
        sum += i;
    }

    clock_t end = clock();

    double time_taken =
        (double)(end - start) / CLOCKS_PER_SEC;

    cout << "Sum = " << sum << endl;
    cout << "Execution time = "
         << time_taken << " seconds" << endl;

    return 0;
}
